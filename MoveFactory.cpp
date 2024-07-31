#include "MoveFactory.h"

Move* MoveFactory::getMove(string name) {
    if (name == "Rock") {
      return new Rock();
    } else if (name == "Paper") {
      return new Paper();
    } else if (name == "Scissor") {
      return new Scissor();
    } else if (name == "Monkey") {
      return new Monkey();
    } else if (name == "Robot") {
      return new Robot();
    } else if (name == "Pirate") {
      return new Pirate();
    } else if (name == "Ninja") {
      return new Ninja();
    } else if (name == "Zombie") {
      return new Zombie();
    } else {
      return nullptr;
    }
  };