#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
class Human: public Player
{
private:
    /* data */
public:
    Human();
    Human(string name, char move);

    char makeMove();
    void setName(string name);
    void setMove(char move);
    string getName();
};

#endif