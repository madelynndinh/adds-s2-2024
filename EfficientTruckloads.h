#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <iostream>
#include <unordered_map>
using namespace std;
class EfficientTruckloads
{
private:
    /* data */
public:
    EfficientTruckloads(/* args */);
    ~EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize,std::unordered_map<int, int>& memo);
};



#endif
