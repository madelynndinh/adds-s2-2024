#ifndef REFEREE_H
#define REFEREE_H
#include "Computer.h"
#include "Human.h"
#include "Move.h"
#include "Player.h"
class Referee {
 private:
  /* data */
 public:
  Referee(/* args */);
  Player* refGame(Player* player1, Player* player2);
};

#endif
