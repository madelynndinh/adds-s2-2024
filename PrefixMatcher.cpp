#include "PrefixMatcher.h"

#include <iostream>
#include <queue>
using namespace std;


void PrefixMatcher::insert(string address, int routerNumber) {
  TrieNode* curr = root;
  for (char c : address) {
    if (curr->children[c - '0'] == nullptr) {
      curr->children[c - '0'] = new TrieNode();
    }
    curr = curr->children[c - '0'];
  }
  curr->index = routerNumber;
}

// int PrefixMatcher::selectRouter(string networkAddress) {
//   TrieNode* curr = root;
//   for (char c : networkAddress) {
//     int index = networkAddress[c - '0'];
//     if (curr->children[index] == nullptr) {
//       return curr->index;  // return -1 if doesnt exist
//     }
//     curr = curr->children[index];
//   }

//   // use BFS to find number of longest word
//   queue<TrieNode*> q;
//   q.push(curr);
//   cout << "BFS Queue: ";

//   int longestWord = -1;
//   while (!q.empty()) {
//     TrieNode* curr = q.front();
//     q.pop();
//     if (curr->index != -1) {
//       longestWord = curr->index;
//     }
//     if (curr->children[0] != NULL) {
//       q.push(curr->children[0]);
//     }
  
//   if (curr->children[1] != NULL) {
//     q.push(curr->children[1]);

//   }
// }

// return longestWord;
// }

int PrefixMatcher::selectRouter(string prefix) {
    TrieNode* currentNode = root;
    int longestMatchingRouter = -1;  // Store the router index of the longest matching prefix
    
    for (int i = 0; i < prefix.length(); i++) {
        int index = prefix[i] - '0';  // Convert '0' or '1' to 0 or 1
        
        // If the current node has a valid router index, update the longest matching router
        if (currentNode->index != -1) {
            longestMatchingRouter = currentNode->index;
        }

        // If the next node in the Trie doesn't exist, break and return the longest match
        if (currentNode->children[index] == nullptr) {
            break;
        }
        
        // Move to the next node in the Trie
        currentNode = currentNode->children[index];
    }

    // Check if the final node itself contains a valid router index
    if (currentNode->index != -1) {
        longestMatchingRouter = currentNode->index;
    }
    
    return longestMatchingRouter;  // Return the longest matching router
}