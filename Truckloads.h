#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <iostream>

using namespace std;


class Truckloads
{
private:
    int numCrates;
    int loadSize;

public:
    Truckloads(/* args */);
    ~Truckloads();
    int numTrucks(int numCrates, int loadSize);
};


#endif