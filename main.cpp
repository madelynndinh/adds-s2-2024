#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main()
{
    vector<int> array1 = {1, 3 ,5, 4, -5, 100, 7777 ,2014};
    vector<int> array2 = {0, 3, 5, 4, -5, 100, 7777, 2014};
    BubbleSort bubbleSort;
    bubbleSort.sort(array1);
    for (int i = 0; i < array1.size(); i++)
    {
        cout << array1.at(i) << endl;
    }
    
    QuickSort quickSort;
    quickSort.sort(array2,0,array2.size()-1);
    for (int i = 0; i < array2.size(); i++)
    {
        cout << array2.at(i) << endl;
    }
    
    RecursiveBinarySearch recursiveBinarySearch;
    cout<<recursiveBinarySearch.search(array1,0,array1.size()-1,1)<<endl;
    cout<<recursiveBinarySearch.search(array2,0,array2.size()-1,1)<<endl;

    return 0;
}