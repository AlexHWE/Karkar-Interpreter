#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iconv.h>
#include <list>
#include <vector>

#include "Libraries.cpp"
#include "ScopeStack.cpp"
#include "VertualMachine.cpp"

extern int yylex();
extern int yyparse();
extern FILE* yyin;
extern int yy_scan_string ( const char *yy_str  );
extern int Tab_Num;
extern int Line_Index;

void yyerror(const char* s);



Function* Temperory_Function_Pointer ;


Library* lib;

#include "../parser.tab.cpp"

// TODO : this code doesn't work well
const char* detect_charset_from_buffer(const unsigned char* buffer) {

	if( buffer[0]==0xEF && buffer[1]==0xBB && buffer[2]==0xBF) return "UTF-8";
	if( buffer[0]==0xFE && buffer[1]==0xFF) return "UTF-16BE";
	if( buffer[0]==0xFF && buffer[1]==0xFE) return "UTF-16LE";
	if( buffer[0]==0x00 && buffer[1]==0x00 && buffer[2]==0xFE && buffer[3]==0xFF ) return "UTF-32BE";
	if( buffer[0]==0xFF && buffer[1]==0xFE && buffer[2]==0x00 && buffer[3]==0x00 ) return "UTF-32LE";
	return "UTF-16LE";
}


int main(int argc,char* argv[]) {
	const char* program_name = argv[0];
	const char* inputFileName = argv[1];
	const char* debug_option = argv[2];

	bool debug = false;
	bool verbose = false;
	
	if(argc == 1){
		printf("not enough arguments, please provide a file name .\n");
		return 1;
	}

	if(argc >= 3){
		if(!strcmp(debug_option,"debug")){
			debug = true;
		}
		if(!strcmp(debug_option,"verbose-debug")){
			debug = true;
			verbose = true;
		}
	}


	
	// Open the input file for reading
	FILE *inputFile = fopen(inputFileName, "rb");
	if (inputFile == NULL) {
		printf("Error opening input file");
		return 1;
	}

	// Determine the size of the input file
	fseek(inputFile, 0, SEEK_END);
	long fileSize = ftell(inputFile);
	fseek(inputFile, 0, SEEK_SET);

	// Allocate a buffer to hold the file content
	char *inputBuffer = (char *)malloc(fileSize);

	// Read the content of the input file into the buffer
	size_t bytesRead = fread(inputBuffer, 1, fileSize, inputFile);
	if (bytesRead != fileSize) {
		perror("Error reading file");
		free(inputBuffer);
		fclose(inputFile);
		return 1;
	}

	// Close the input file
	fclose(inputFile);

	// Open the character set conversion descriptor
	iconv_t cd = iconv_open("UTF-8", detect_charset_from_buffer((const unsigned char*)inputBuffer));
	if (cd == (iconv_t)-1) {
		perror("Error opening converter");
		free(inputBuffer);
		return 1;
	}

	// Perform the character set conversion
	char *outputBuffer = (char *)malloc(fileSize * 4); // Assume worst-case expansion for UTF-8
	char *inputPtr = inputBuffer;
	char *outputPtr = outputBuffer;

	size_t inputSize = bytesRead;
	size_t outputSize = fileSize * 4;

	if (iconv(cd, &inputPtr, &inputSize, &outputPtr, &outputSize) == (size_t)-1) {
		perror("Error converting character set");
		free(inputBuffer);
		free(outputBuffer);
		iconv_close(cd);
		return 1;
	}
	iconv_close(cd);

	// Print the converted content to the console
	if(debug)printf("File Content:\n%s\n", outputBuffer);

	// prepere lib mem
	lib = new Library();
	Scopes = new ScopeStack();
	Symbol_Tables = new SymbolTableStack();
	Global_Dependencies = new std::list<Dependency*>;

	/* Tokenize the code */
    try{
	    yy_scan_string(outputBuffer+3);
    }catch (const char * error_massage){
        printf("Unknown Token !");
    }

	/* Parce the code */
    try{
        yyparse();
        if(debug)lib->debug(0);
    }catch(const char * error_massage){
        printf("Unknown grammer or Syntax near line %d as : %s \n",Line_Index,error_massage);
        return -1;
    }


	/* generate the bytecode */
    try{
        lib->GenerateByteCode(true);
        if(debug)lib->debug_bytecode();
    } catch (const char * error_massage) {
        printf("Unexpected Byte Code Generator Error near line %d as : %s \n",Line_Index,error_massage);
        return -1;
    }

    delete lib->Functions;
    delete Scopes;
    delete Symbol_Tables;


	free(inputBuffer);
	free(outputBuffer);

	/* Running the code */
	try{
		VirtualMachine* VM = new VirtualMachine(Symbol_Tables->FindDefinition("main"));
		VM->Run(
			new std::vector<Instruction*>(
				lib->Instructions->begin(),
				lib->Instructions->end()
			),
			new std::vector<Dependency*>(
				Global_Dependencies->begin(),
				Global_Dependencies->end()
			),
			debug && verbose
		);
		delete VM;
	}
	catch(const char* error_massage){
		printf("Unexpected Run-time Error :%s",error_massage);
		return -1;
	}
	if(debug)printf("Program finished execution successfully.\n");


	delete lib;


	return 0;
}

void yyerror(const char* s) {
	throw (" ");
}