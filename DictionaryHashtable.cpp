#include "util.hpp"
#include "DictionaryHashtable.hpp"
#include <iostream>


/* Create a new Dictionary that uses a Hashset back end */
DictionaryHashtable::DictionaryHashtable(){

}

/* Insert a word into the dictionary. */
bool DictionaryHashtable::insert(std::string word)
{
	auto inserted = hashSet.insert(word);

	if (inserted.second) {
		return true;
	}

	else {
		return false;
	}
}

/* Return true if word is in the dictionary, and false otherwise */
bool DictionaryHashtable::find(std::string word) const
{
	auto found = hashSet.find (word);

	if ( found == hashSet.end()) {
		return false;
	}
	else {
		return true;
	}

}

/* Destructor */
DictionaryHashtable::~DictionaryHashtable(){
	delete this;
}
