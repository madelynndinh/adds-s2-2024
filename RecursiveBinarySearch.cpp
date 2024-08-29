#include "RecursiveBinarySearch.h"
#include <iostream>

using namespace std;

 bool RecursiveBinarySearch::search(std::vector<int>& array, int start, int end, int target)
 {
if(start > end)
{return false;}
int mid = start+((end-start)/2);
if(array.at(mid)==target){
    return true;
}
else if (array.at(mid) > target)
{
    return search(array, start, mid-1, target);
}
else
{
    return search(array, mid+1, end, target);
}

 };