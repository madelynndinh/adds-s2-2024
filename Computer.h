#ifndef COMPUTER_H
#define COMPUTER_H
#include "Human.h"
#include "Move.h"
#include "Player.h"
#include "Referee.h"
#include "Rock.h"
class Computer : public Player {
 private:
  /* data */
 public:
  Computer(/* args */);
  Move* makeMove();
  string getName();
  void setMove(Move* move);
};
#endif
