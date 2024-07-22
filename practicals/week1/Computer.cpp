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