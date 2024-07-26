#include "Human.h"
Human::Human(/* args */)
{
    this->name = "Human";
    this->move = ' ';
}
Human::Human(string name, char move)
{
    this->name = name;
    this->move = move;
}

  char Human::makeMove()
  {
return this->move;
  };

void Human::setName(string name){
this->name = name;
}
void Human::setMove(char move){
bool validMove = true;
while (validMove)
{
    if (move=='S' || move=='P' || move=='R')
{
    this->move = move;
    validMove = false;
}
}

}

string Human::getName(){
return this->name;
};