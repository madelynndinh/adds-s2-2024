#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <iostream>
#include <vector>
using namespace std;

class QuickSort: public Sort
{
private:
    /* data */
public:
    QuickSort(){};
    vector<int> sort(vector<int>& array);
    vector<int> sortHelper(vector<int>& array, int start, int end);

};
#endif