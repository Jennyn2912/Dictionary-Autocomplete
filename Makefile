# A simple makefile for CSE 100 P3

CC=g++
CXXFLAGS=-std=c++11 -g -Wall
LDFLAGS=-g

all: benchtrie util.o

benchtrie: util.o DictionaryTrie.o DictionaryBST.o DictionaryHashtable.o MNode.o

DictionaryTrie.o: DictionaryTrie.hpp 

MNode.o: MNode.hpp

DictionaryBST.o: DictionaryBST.hpp

DictionaryHashtable.o: DictionaryHashtable.hpp

util.o: util.hpp

clean:
	rm -f benchtrie *.o core* *~

