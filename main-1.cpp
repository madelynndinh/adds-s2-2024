#include <iostream>
#include <vector>
#include <limits>
#include <list>
#include "Node.h"
#include "LinkedList.h"
#include "bigNumCalc.h"
#include <iterator>


using namespace std;
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main(void) {
    //int result[5] =  {1,2,3,4,5};
    // LinkedList ll(result, 5);

    // ll.printList();
    // ll.insertPosition(10, 10);
    // ll.insertPosition(1, 20);
    // ll.insertPosition(4, 30);
    // std::cout<<ll.deletePosition(100)<<std::endl;
    // ll.printList();
    // std::cout<<ll.get(100)<<std::endl;
    // std::cout<<ll.search(10)<<std::endl;
    //     std::cout<<ll.search(1000)<<std::endl;

    bigNumCalc bc;
    // std::list<int> num1 = bc.buildBigNum("1234567890");
    // std::list<int> num2 = bc.buildBigNum("9876543210");
    // std::list<int> results = bc.add(num1, num2);
    std::list<int> num1 = bc.buildBigNum("9876543210");
    std::list<int> num2 = bc.buildBigNum("1234567890");
    std::list<int> results = bc.mul(num1, num2);

    showlist(results);
    return 0;
}


