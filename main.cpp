#include "Computer.h"
#include "Human.h"
#include "Move.h"
#include "Player.h"
#include "Referee.h"
int main() {
  Player* player1 = new Human();
  player1->setMove();
  Player* player2 = new Human();
  player2->setMove();
  Referee referee;
  Player* winner = referee.refGame(player1, player2);
  if (winner == nullptr) {
    cout << "Tie" << endl;
  } else {
    cout << winner->getName() << " won" << endl;
  }
  return 0;
}