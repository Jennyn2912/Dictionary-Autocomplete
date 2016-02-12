#include "util.hpp"
#include "DictionaryHashtable.hpp"
#include <iterator>

/* Create a new Dictionary that uses a Hashset back end */
DictionaryHashtable::DictionaryHashtable(){
	this->hashSet = new std::unordered_set<std::string>();
}

/* Insert a word into the dictionary. */
bool DictionaryHashtable::insert(std::string word)
{
	auto inserted = (this->hashSet)->insert(word);

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
	auto found = (this->hashSet)->find (word);

	if ( found == )


}

/* Destructor */
DictionaryHashtable::~DictionaryHashtable(){
	delete this;
}
