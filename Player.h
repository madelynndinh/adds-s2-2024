#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player
{
protected:
    string name;
    char move;
public:
    Player(/* args */){};
    ~Player(){};

    virtual char makeMove()=0;
    virtual string getName()=0;
    virtual void setMove(char move)=0;
    virtual void setName(string name)=0;
};
#endif