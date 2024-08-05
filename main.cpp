#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <unordered_map>
#include <iostream>

using namespace std;

int main()
{
    Truckloads t;
    int numCrates, loadSize;
    cin >> numCrates >> loadSize;
    cout << t.numTrucks(numCrates, loadSize);
    EfficientTruckloads truck;
    unordered_map<int, int> memo;
    cout << truck.numTrucks(numCrates, loadSize,memo);
    return 0;
}