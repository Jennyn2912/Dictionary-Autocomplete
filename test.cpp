#include "DictionaryHashTable.hpp"
#include "DictionaryBST.hpp"
#include <iostream>

using namespace std;

int main (int argc, char **argv)  {

	DictionaryHashtable::DictionaryHashtable* htable = new DictionaryHashtable::DictionaryHashtable();
	

	bool test = htable->insert("a");

	if (test == true) {
		cout << "Pass" << endl;
	}

	test = htable->find("a");
	if (test == true) {
		cout << "Pass 2" << endl;
	}

	test = htable->find("b");
	if (test == false) {
		cout << "Pass 3" << endl;
	}

	DictionaryBST::DictionaryBST* bst = new DictionaryBST::DictionaryBST();
	
	test = bst->insert("a");

	if (test == true) {
		cout << "Pass" << endl;
	}

	test = bst->find("a");
	if (test == true) {
		cout << "Pass 2" << endl;
	}

	test = bst->find("b");
	if (test == false) {
		cout << "Pass 3" << endl;
	}
	return 0;
}