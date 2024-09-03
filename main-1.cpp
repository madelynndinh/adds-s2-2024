#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedList.h"

using namespace std;


int main(void) {
    int result[5] =  {1,2,3,4,5};
    LinkedList ll(result, 5);

    ll.printList();
    ll.insertPosition(10, 10);
    ll.insertPosition(1, 20);
    ll.insertPosition(4, 30);
    std::cout<<ll.deletePosition(100)<<std::endl;
    ll.printList();
    std::cout<<ll.get(100)<<std::endl;
    std::cout<<ll.search(10)<<std::endl;
        std::cout<<ll.search(1000)<<std::endl;

    return 0;
}


