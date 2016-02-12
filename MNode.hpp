#ifndef MNODE_HPP
#define MNODE_HPP

#include <array>

class MNode {
	public:
		//functions 
		MNode();


		~MNode();

		//data fields
		bool key;           // is this an end node or not 
		int freq;           // frequency of word
		MNode* array[27];   // array representing alphabet

};
#endif 