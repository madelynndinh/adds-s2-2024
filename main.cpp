#include "AutoComplete.h"
#include <iostream>
#include "PrefixMatcher.h"
using namespace std;

int main() {
    Autocomplete trie;
    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");
    trie.insert("ball");
    trie.insert("banana");

    vector<string> allWords = trie.getSuggestions("ba");
    
    // cout << "All words in the Trie: " << endl;
    // for (const string& word : allWords) {
    //     cout << word << endl;
    // }
    PrefixMatcher p;
    p.insert("1100110111", 1);
    p.insert("110011011", 2);
    p.insert("11001101", 3);
   cout<< p.selectRouter("110011011001")<<endl;


    return 0;
}