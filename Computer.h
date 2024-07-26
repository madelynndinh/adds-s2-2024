#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "Human.h"
#include "Referee.h"

class Computer: public Player
{
private:
    /* data */
public:
    Computer(/* args */);
    char makeMove();
    string getName();
    void setMove(char move);
    void setName(string name);
};
#endif

