#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
class Human: public Player
{
private:
    /* data */
public:
    Human();
    Human(string name, char move);
    ~Human();
    char makeMove();
    void setName(string name);
    string getName();
};

#endif