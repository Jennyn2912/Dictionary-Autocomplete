#include "util.hpp"
#include "DictionaryBST.hpp"

/* Create a new Dictionary that uses a BST back end */
DictionaryBST::DictionaryBST(){

}

/* Insert a word into the dictionary. */
bool DictionaryBST::insert(std::string word)
{
	auto inserted = bst_set.insert(word);

	if (inserted.second) {
		return true;
	}

	else {
		return false;
	}
}

/* Return true if word is in the dictionary, and false otherwise */
bool DictionaryBST::find(std::string word) const
{
	auto found = bst_set.find (word);

	if ( found == bst_set.end()) {
		return false;
	}
	else {
		return true;
	}
}

/* Destructor */
DictionaryBST::~DictionaryBST(){
	delete this;
}
