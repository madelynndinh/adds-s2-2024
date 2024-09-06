
#include "LinkedList.h"
#include <iostream>
#include <limits>
using namespace std;

#include "LinkedList.h"

LinkedList::LinkedList() {
  head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
  head = nullptr;
  for (int i = len - 1; i >= 0; i--) {
    head = new Node(array[i], head);
  }
}

LinkedList::~LinkedList() {
  Node* curr = head;
  while (curr) {
    Node* next = curr->link;
    delete curr;
    curr = next;
  }
}

void LinkedList::insertPosition(int pos, int newNum) {
  if (pos <= 1) {
    head = new Node(newNum, head);
  } else {
    Node* curr = head;
    for (int i = 0; i < pos - 2; i++) {
      if (!curr->link) {
        break;
      }
      curr = curr->link;
    }
    if (curr) {
      Node* newNode = new Node(newNum, curr->link);
      curr->link = newNode;
    } else {
      Node* newNode = new Node(newNum, nullptr);
      curr->link = newNode;
    }
  }
}

bool LinkedList::deletePosition(int pos) {
  if (pos < 1) {
    return false;
  }
  if (pos == 1) {
    Node* temp = head;
    head = head->link;
    delete temp;
    return true;
  }
  Node* curr = head;
  for (int i = 0; i < pos - 2; i++) {
    if (!curr) {
      return false;
    }
    curr = curr->link;
  }
  if (!curr) {
    return false;
  }
  Node* temp = curr->link;
  curr->link=temp->link;
  delete temp;
  return true;
}

int LinkedList::get(int pos) {
  if (pos < 1) {
    return numeric_limits < int >::max();
  }
  Node* curr = head;
  for (int i = 0; i < pos - 1; i++) {
    if (!curr) {
      return numeric_limits < int >::max();
    }
    curr = curr->link;
  }
  if (!curr) {
    return numeric_limits < int >::max();
  }
  return curr->data;
}

int LinkedList::search(int target) {
  Node* curr = head;
  int pos = 1;
  while (curr) {
    if (curr->data == target) {
      return pos;
    }
    curr = curr->link;
    pos++;
  }
  return -1;
}

void LinkedList::printList() {
  if (!head) {
    return;
  }
  cout << "[";
  Node* curr = head;
  while (curr) {
    cout << curr->data;
    if (curr->link) {
      cout << " ";
    }
    curr = curr->link;
  }
  cout << "]";
}