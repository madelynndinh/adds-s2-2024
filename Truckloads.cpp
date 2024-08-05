#include "Truckloads.h"
Truckloads::Truckloads(/* args */)
{
}

Truckloads::~Truckloads()
{
}

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    int n = 0;
    n +=1;
    // base case
    if (numCrates <= loadSize)
        return n;

    // recursive call
    if (numCrates%2 ==1)
    {
        numCrates= numCrates/2;
        return numTrucks(numCrates, loadSize)+ numTrucks(numCrates+1, loadSize);
    }
    else
    {
        numCrates= numCrates/2;
        return numTrucks(numCrates, loadSize)+ numTrucks(numCrates, loadSize);
    }
};