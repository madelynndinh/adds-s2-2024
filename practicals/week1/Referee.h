#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
#include "Computer.h"
#include "Human.h"
class Referee
{
private:
    /* data */
public:
    Referee(/* args */);
    Player* refGame(Player* player1, Player* player2);

};

#endif
