#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"
#include <iostream>
#include <vector>
using namespace std;    

class BubbleSort: public Sort
{
private:
    /* data */
public:
    BubbleSort(){};
    vector<int> sort(vector<int>& array);
};

#endif
