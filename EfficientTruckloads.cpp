#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads(/* args */)
{
}

EfficientTruckloads::~EfficientTruckloads()
{
}


int EfficientTruckloads::numTrucks(int numCrates, int loadSize,std::unordered_map<int, int>& memo)
{
    int n = 0;
    n +=1;

   // Check if the result is already in the memo
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    // base case
    if (numCrates <= loadSize)
        return n;
        
    // recursive call
    if (numCrates%2 ==1)
    {// Compute the result recursively and store it in the memo    
        numCrates= numCrates/2;
        memo[n] = numTrucks(numCrates, loadSize,memo)+ numTrucks(numCrates+1, loadSize, memo);
    }
    else
    {
        numCrates= numCrates/2;
        memo[n] = numTrucks(numCrates, loadSize,memo)+ numTrucks(numCrates, loadSize,memo);
    }
    return memo[n];
};