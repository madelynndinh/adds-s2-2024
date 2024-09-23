#include <iostream>
#include <vector>
#include "Heap.tpp" // Including the heap header
using namespace std;
int main() {
    // Test the empty heap creation
    Heap<int> heap1;
    std::cout << "Created an empty heap" << std::endl;

    // Test the constructor with a vector
    std::vector<int> initialValues = {10, 15, 20, 17, 25};
    Heap<int> heap(initialValues);

for (size_t i = 0; i < heap.values.size(); i++)
  {
        cout<< heap.values[i]<<endl;
    }

    // Test insert function
    heap.insert(5);
    std::cout << "Inserted value 5 into heap" << std::endl;
for (size_t i = 0; i < heap.values.size(); i++)
  {
        cout<< heap.values[i]<<endl;
    }
    // // Test getMin function
    int minValue = heap.getMin();
    std::cout << "Minimum value in the heap: " << minValue << std::endl;

    //Test remove function
   heap.remove(10);
    std::cout << "Removed value 10 from heap" << std::endl;
for (size_t i = 0; i < heap.values.size(); i++)
  {
        cout<< heap.values[i]<<endl;
    }
    // Test getMin after removal
    minValue = heap.getMin();
    std::cout << "Minimum value in the heap after removal: " << minValue << std::endl;

    return 0;
}
