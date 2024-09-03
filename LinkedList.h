#ifndef LinkedList_H
#define LinkedList_H
#include "Node.h"


class LinkedList    
{
    Node* head;
public:
    LinkedList();
    LinkedList(int* array, int len);
    ~LinkedList();
    void printList();
    void insertPosition(int pos, int newNum);
    bool deletePosition(int pos);
    int get(int pos);
    int count();
    int len(LinkedList);
    int search(int target);
    Node* traverse(unsigned int index);

};

#endif