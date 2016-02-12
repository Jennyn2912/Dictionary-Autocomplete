#include "DictionaryTrie.hpp"
#include "MNode.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    // Input keys (use only 'a' through 'z' and lower case)
    char keys[][8] = {"the", "a", "there", "answer", "any", "by", "bye", "their"};
    DictionaryTrie::DictionaryTrie* trie = new DictionaryTrie();

    char output[][32] = {"Not present in trie", "Present in trie"};

    bool test = trie->insert("a", 1);

    if (test) {
        std::cout << "SUCESS insert 1" << std::endl;
    }

    test = trie->insert("and", 1);
    if (test) {
        std::cout << "SUCESS insert 2" << std::endl;
    }

    test = trie->insert("an", 1);
    if (!test) {
        std::cout << "SUCESS insert 3" << std::endl;
    }

    test = trie->insert("badminton",1);
    if (test) {
        std::cout << "SUCESS insert 4" << std::endl;
    }

    test = trie->insert("",1);
    if (!test) {
        std::cout << "SUCESS insert 5" << std::endl;
    }

    test = trie->find("a");
    if (test) {
        std::cout << "SUCESS search 1" << std::endl;
    }

    test = trie->find("batminton");
    if (!test) {
        std::cout << "SUCESS search 2" << std::endl;
    }

    test = trie->find("badmintons");
    if (!test) {
        std::cout << "SUCESS search 3" << std::endl;
    }

    test = trie->find("car");
    if (!test) {
        std::cout << "SUCESS search 4" << std::endl;
    }

    test = trie->find("");
    if (test) {
        std::cout << "SUCESS search 5" << std::endl;
    }



 
    return 0;
}