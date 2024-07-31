#include "Move.h"
Move::Move() { this->name = " "; }
Move::~Move() {}

string Move::getName() { return name; }
vector<string> Move::getMoves() { return this->moves; }

Move* Move::beats(Move* m1, Move* m2) {
  for (string& weakerMove : m1->getMoves()) {
    if (weakerMove.compare(m2->getName()) == 0) {
      return m1;
    }
  }
  for (string& weakerMove : m2->getMoves()) {
    if (weakerMove.compare(m1->getName()) == 0) {
      return m2;
    }
  }
  return nullptr;
}