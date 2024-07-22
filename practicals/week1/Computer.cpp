#include "Computer.h"
Computer::Computer(/* args */)
{
    this->name = "Computer";
    this->move = 'R';
}

Computer::~Computer()
{
}

    char Computer::makeMove(){
    return this->move;
    };
    string Computer::getName(){
    return this->name;};

        void Computer::setMove()
        {
            this->move = 'R';
        };
    void Computer::setName(string name)
    {
        this->name = name;
    };