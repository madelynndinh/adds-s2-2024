#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
class Computer: public Player
{
private:
    /* data */
public:
    Computer(/* args */);
    ~Computer();
    char makeMove();
    string getName();
    void setMove();
    void setName(string name);
};
#endif

