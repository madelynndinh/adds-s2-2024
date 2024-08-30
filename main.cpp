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
    cout<< stringvalues << endl;

    while (iss >> number ) 
   {
    array.push_back(number);
    }
  
  for (int i = 0; i < array.size(); i++)
    {
        cout << array.at(i) << endl;
    }

    BubbleSort bubbleSort;
    bubbleSort.sort(array);
     RecursiveBinarySearch recursiveBinarySearch;
    cout<<std::to_string(recursiveBinarySearch.search(array,0,array.size()-1,1))<<endl;
    for (int i = 0; i < array.size(); i++)
    {
        cout << array.at(i) << endl;
    }
    return 0;
}