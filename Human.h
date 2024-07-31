#ifndef HUMAN_H
#define HUMAN_H
#include "Computer.h"
#include "Move.h"
#include "Player.h"
#include "Referee.h"
class Human : public Player {
 private:
  /* data */
 public:
  Human();
  Human(string name);

  Move* makeMove();
  void setName(string name);
  void setMove(Move* move);
  string getName();
};

#endif