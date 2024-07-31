#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Move {
 protected:
  string name;
  vector<string> moves;

 public:
  Move();
  ~Move();
  string getName();
  vector<string> getMoves();
  Move* beats(Move* m1, Move* m2);
};
#endif