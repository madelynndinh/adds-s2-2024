
#include "LinkedList.h"
#include <iostream>
LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len)
    
   { unsigned int position = 0;

    head = new Node(array[position], nullptr);
    position++;
    
    while (position < len) { 
        Node *prevNode = traverse(position-1);
        Node *newNode  = new Node(array[position], nullptr);
        prevNode->link = newNode;
        position++;
    }
    
    
    
}
LinkedList::~LinkedList(){
    while (head != nullptr)
    {
        deletePosition(1);
    }
}
void LinkedList::insertPosition(int pos, int newNum)
{   int count = this->count();
    if(pos <= 1)
    {
        head = new Node(newNum, head);
        return;
    }
   else if (pos>count)
   {
        Node *prevNode = traverse(count-1);
        Node *newNode  = new Node(newNum, nullptr);
        prevNode->link = newNode;
        
   }
   else
   {
    //if inserting between two nodes
    Node *prevNode = traverse(pos-1);
    // if inserting out of bounds, abort
    if (prevNode == nullptr) {
        return;
    }

    Node *newNode  = new Node(newNum, prevNode->link);
    prevNode->link = newNode;
    
   }
   
    
}


bool LinkedList::deletePosition(int pos)
{

Node* previous = head;
Node* current = head;
if(pos >count())
{
    return false;
}
if (head == nullptr)
{
    return false;
}

else if (pos == 1)
{
    head = current->link;
    delete current;
    return true;
}

else
{
    while (pos != 1)
    {
        previous = current;
        current = current->link;
        pos--;
    }
    previous -> link = current -> link;
    free(current);
    current = NULL;
    return true;
}

}

int LinkedList::count() {
    unsigned int count = 0;
    Node* currNode = head; 
    while (currNode != nullptr) { 
        currNode = currNode->link; 
        count++;
    } 
    
    return count;
}

    int LinkedList::search(int target)
    {unsigned int position = 0;
    Node* currNode = head; 

    while (currNode != nullptr && position < count()) { 
        if (currNode->data == target)
        {
              return position;
        }
        currNode = currNode->link; 
        position++;
    } 
    return -1;
    };

    void  LinkedList::printList()
    {
        Node* currNode = head;

        while (currNode != nullptr) { 
            currNode = currNode->link; 
        } 
    };

Node* LinkedList::traverse(unsigned int index)
{
    unsigned int position = 0;
    Node* currNode = head;
    while (currNode != nullptr && position < index) {
        currNode = currNode->link;  
        position++;
    } 
    return currNode;
            
        } 


int LinkedList::get(int pos)
{
    if (pos > count())
    {
        return std::numeric_limits < int >::max();
    }
    
    Node* currNode = traverse(pos);
    return currNode->data;
};