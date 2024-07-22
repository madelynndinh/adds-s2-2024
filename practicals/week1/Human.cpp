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
string Human::getName(){
return this->name;
};