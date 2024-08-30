#include "BubbleSort.h"
#include "Sort.h"

vector<int> BubbleSort::sort(vector<int>& array)
{
    vector<int> result;
    for (size_t i = array.size()-1; i >0; i--)
    {
        for (size_t j = 0; j < i; j++)
        {
            if (array.at(j)>array.at(j+1))
            {
                //swap
                int temp = array.at(j);
                array.at(j) = array.at(j+1);
                array.at(j+1) = temp;   
            }
            
        }
        
    }
    return array;
}