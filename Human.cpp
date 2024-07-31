#include "Human.h"

#include "Move.h"
#include "MoveFactory.h"
Human::Human(/* args */) {
  this->name = "Human";
  this->move = nullptr;
}
Human::Human(string name) {
  this->name = name;
  this->move = nullptr;
}

Move* Human::makeMove() { return this->move; };

void Human::setName(string name) { this->name = name; }

void Human::setMove(Move* move) {
  string moveName;
  if (move==nullptr)
  {
  std::cout << "Enter move: ";
  std::cin >> moveName;}
else
{
  moveName == move->getName();
}

  this->move = MoveFactory::getMove(moveName);
};

string Human::getName() { return this->name; };