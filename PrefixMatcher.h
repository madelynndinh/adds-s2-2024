#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class PrefixMatcher
{
    private:
    struct TrieNode{
        TrieNode* children[2]; //0 and 1
        int index = -1;
    };
    TrieNode* root = new TrieNode();
    public:
    int selectRouter(string networkAddress);  // return the router with the longest matching prefix
// We've made this a string for ease of implementation, if you'd like to work with binary numbers in your implementation feel free but for testing you need to provide an interface that takes a string

    void insert(string address, int routerNumber); // add a router address
};

#endif