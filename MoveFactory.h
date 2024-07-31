#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H
#include <string>
#include <vector>

#include "Monkey.h"
#include "Move.h"
#include "Ninja.h"
#include "Paper.h"
#include "Pirate.h"
#include "Robot.h"
#include "Rock.h"
#include "Scissor.h"
#include "Zombie.h"
class MoveFactory {
 public:
  static Move* getMove(string name) ;
};
#endif