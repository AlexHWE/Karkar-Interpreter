build: 
	bison -d src/parser.y -o parser.tab.cpp
	flex src/lexer.l
	g++ src/main.cpp lex.yy.c  -o bin/interpreter -lm

release: 
	bison -d src/parser.y -o parser.tab.cpp
	flex src/lexer.l
	g++ src/main.cpp lex.yy.c  -o bin/interpreter -lm -O3

run:
	@ bin/./interpreter test.kk

clean:
	rm  lex.yy.c 
	rm  parser.tab.cpp
	rm  parser.tab.hpp
