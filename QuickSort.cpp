#include "QuickSort.h"
#include "Sort.h"
#include <iostream>


vector<int> QuickSort::sortHelper(vector<int> array, int start, int end)
{
       vector<int> result = array; 
//Base case, nothign to sort
if(start >= end)
{
        return result;}


int pivot_index = start+2;
if(pivot_index > end){
        pivot_index = end;
}
//select the third element as pivot
int pivot = result.at(pivot_index);

//move pivot to the end
int temp = result.at(end);
result.at(end) = result.at(pivot_index);
result.at(pivot_index) = temp;
//index to place pivot after partitioning
int partitioning_index = start;
for (int i = start; i < end; i++)
{
        if (result.at(i) < pivot)
        {
                //swap ith element with partioning index
                temp = result.at(i);
                result.at(i) = result.at(partitioning_index);
                result.at(partitioning_index) = temp;
                partitioning_index ++;
        }
        
}
//swap pivot with pivot_index
temp = result.at(partitioning_index);
result.at(partitioning_index) = result.at(end);
result.at(end) = temp;

//sort left and right subresults
sortHelper(result, start,partitioning_index -1);
sortHelper(result, partitioning_index +1, end);
return result;
}

vector<int> QuickSort::sort(vector<int> array)
{
    return sortHelper(array, 0, array.size()-1);
}