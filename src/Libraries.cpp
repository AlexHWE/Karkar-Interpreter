#include <list>

#include "Functions.cpp"

class Library{
	public:
		std::list<Function*>* Functions;
		std::list<Instruction*>* Instructions;
		void debug(int tabs){
			for(int x = 0;x < tabs;x++)printf("    ");
			printf("The Abstract Syntax Tree AST :");
			printf("\n");
			for (std::list<Function*>::iterator it = Functions->begin(); it != Functions->end(); ++it) 
				(*it)->debug(tabs+1);
		}
		void GenerateByteCode(bool show = false){
			Instructions = new std::list<Instruction*> ;
			for (std::list<Function*>::iterator it = Functions->begin(); it != Functions->end(); ++it)
				(*it)->GenerateByteCode(Instructions);
		}
		void debug_bytecode(){
			printf("ByteCode:\n");
			int index = 0;
			for (std::list<Instruction*>::iterator it = Instructions->begin(); it != Instructions->end(); ++it) {
				printf("    %03d: ",index);
				(*it)->debug();
				index++;
			}
		}
};
