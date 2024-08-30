#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream
#include <string>       // std::string

int main()
{
    std::string stringvalues;
    std::getline (std::cin,stringvalues);
    std::istringstream iss (stringvalues);
    int number;
    std::vector<int> array;

    while (iss >> number ) 
   {
    array.push_back(number);
    }
  
    BubbleSort bubbleSort;
    vector<int> result = bubbleSort.sort(array);
     RecursiveBinarySearch recursiveBinarySearch;
     if (recursiveBinarySearch.search(result,1)==1)
     {
        cout<<"true"<<endl;
     }
     else
     {
        cout<<"false"<<endl;
     }
     
    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << endl;
    }
    return 0;
}