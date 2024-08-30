#include "BubbleSort.h"
#include "Sort.h"

vector<int> BubbleSort::sort(vector<int> array)
{
    vector<int> result = array;
    for (size_t i = result.size()-1; i >0; i--)
    {
        for (size_t j = 0; j < i; j++)
        {
            if (result.at(j)>result.at(j+1))
            {
                //swap
                int temp = result.at(j);
                result.at(j) = result.at(j+1);
                result.at(j+1) = temp;   
            }
            
        }
        
    }
    return result;
}