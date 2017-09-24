##
# Makefile
# Compilers - Program2
# Fall 2017
##

CXX=g++
CXXFLAGS=-std=c++11 -ggdb -Wall
LEX=flex++
LEXFLAGS=--warn

.PHONY: clean

program2: program2.cpp program2_lex.cpp attributes.h 
	${CXX} ${CXXFLAGS} -o program2 program2.cpp program2_lex.cpp attributes.cpp

program2_lex.cpp: program2.lpp lex.h 
	${LEX} ${LEXFLAGS} program2.lpp

clean: 
	/bin/rm -f *.o a.out core.* program2 program2_lex.cpp
