#include "util.hpp"
#include "DictionaryTrie.hpp"

/* Create a new Dictionary that uses a Trie back end */
DictionaryTrie::DictionaryTrie(){
	root = new MNode::MNode();
}

/* Insert a word with its frequency into the dictionary.
 * Return true if the word was inserted, and false if it
 * was not (i.e. it was already in the dictionary or it was
 * invalid (empty string) */
bool DictionaryTrie::insert(std::string word, unsigned int freq)
{
  if (word.empty() || DictionaryTrie::find(word)) {
  	return false;
  }		
   
  const char *charPtr = word.c_str();
  MNode* currentNode = root;
  int i, pos;

  for(i = 0; i < word.size(); i++) {
		char ch = charPtr[i];
		pos = (int)ch - ((int) 'a');
		if (currentNode->array[pos]) {
			currentNode = currentNode->array[pos];
		}

		else {
			currentNode->array[pos] = new MNode::MNode();
		}
  }

  currentNode->key = true;
  currentNode->freq = freq;
  return true;  
}

/* Return true if word is in the dictionary, and false otherwise */
bool DictionaryTrie::find(std::string word) const
{
	const char *charPtr = word.c_str();
	MNode* currentNode = root;
	int i, pos;


	for(i = 0; i < word.size(); i++) {
		char ch = charPtr[i];
		pos = (int)ch - ((int) 'a');
		if (currentNode->array[pos]) {
			currentNode = currentNode->array[pos];
		}
		else {
			return false;
		}

    }
  	return true;
}

/* Return up to num_completions of the most frequent completions
 * of the prefix, such that the completions are words in the dictionary.
 * These completions should be listed from most frequent to least.
 * If there are fewer than num_completions legal completions, this
 * function returns a vector with as many completions as possible.
 * If no completions exist, then the function returns a vector of size 0.
 * The prefix itself might be included in the returned words if the prefix
 * is a word (and is among the num_completions most frequent completions
 * of the prefix)
 */
std::vector<std::string> DictionaryTrie::predictCompletions(std::string prefix, unsigned int num_completions)
{
  std::vector<std::string> words;
  return words;
}

/* Destructor */
DictionaryTrie::~DictionaryTrie(){}
