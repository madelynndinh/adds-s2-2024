#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

#include "Move.h"
using namespace std;

class Player {
 protected:
  string name;
  Move* move;

 public:
  Player(/* args */);
  ~Player();

  virtual Move* makeMove() = 0;
  virtual string getName() = 0;
  virtual void setMove(Move* move) = 0;
  virtual void setName(string name) = 0;
};
#endif