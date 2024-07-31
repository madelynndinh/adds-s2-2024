#include "Computer.h"
#include "MoveFactory.h"
#include "Rock.h"
Computer::Computer(/* args */) {
  this->name = "Computer";
  this->move = MoveFactory::getMove("Rock");
}

Move* Computer::makeMove() { return this->move; };
void Computer::setMove(Move* move) { this->move = move; };

string Computer::getName() { return this->name; };
