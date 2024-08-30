#include "QuickSort.h"
#include "Sort.h"
#include <iostream>


vector<int> QuickSort::sortHelper(vector<int>& array, int start, int end)
{
//Base case, nothign to sort
if(start >= end)
{
        return array;}


int pivot_index = start+2;
if(pivot_index > end){
        pivot_index = end;
}
//select the third element as pivot
int pivot = array.at(pivot_index);

//move pivot to the end
int temp = array.at(end);
array.at(end) = array.at(pivot_index);
array.at(pivot_index) = temp;
//index to place pivot after partitioning
int partitioning_index = start;
for (int i = start; i < end; i++)
{
        if (array.at(i) < pivot)
        {
                //swap ith element with partioning index
                temp = array.at(i);
                array.at(i) = array.at(partitioning_index);
                array.at(partitioning_index) = temp;
                partitioning_index ++;
        }
        
}
//swap pivot with pivot_index
temp = array.at(partitioning_index);
array.at(partitioning_index) = array.at(end);
array.at(end) = temp;

//sort left and right subarrays
sortHelper(array, start,partitioning_index -1);
sortHelper(array, partitioning_index +1, end);
return array;
}

vector<int> QuickSort::sort(vector<int>& array)
{
    return sortHelper(array, 0, array.size()-1);
}