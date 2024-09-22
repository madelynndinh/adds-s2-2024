#include "Autocomplete.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

void Autocomplete::insert(string word) {
  TrieNode* curr = root;
  for (char c : word) {
    if (curr->children[c - 'a'] == nullptr) {
      curr->children[c - 'a'] = new TrieNode();
    }
    curr = curr->children[c - 'a'];
  }
  curr->term = true;
};

vector<string> Autocomplete::getSuggestions(string partialWord) {
  vector<string> suggestions;
  TrieNode* curr = root;
  for (char c : partialWord) {
    if (curr->children[c - 'a'] == nullptr) {
      return suggestions;
    }
    curr = curr->children[c - 'a'];
  }
  queue<pair<TrieNode*, string>> q;
  q.push({curr, partialWord});
  while (!q.empty()) {
    pair<TrieNode*, string> currPair = q.front();
    q.pop();
    curr = currPair.first;
    string currWord = currPair.second;
    if (curr->term) {
      suggestions.push_back(currWord);
    }
    for (int i = 0; i < 26; i++) {
      if (curr->children[i] != nullptr) {
        q.push({curr->children[i], currWord + (char) (i + 'a')});
      }
    }
  }
  return suggestions;
};