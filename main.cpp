#include "Computer.h"
#include "Human.h"
#include "Move.h"
#include "Player.h"
#include "Referee.h"
int main() {
  Player* player1 = new Human("Player1");
  player1->setMove(nullptr);
//   Player* player2 = new Human("Player2");
Player* player2 = new Computer();
  Referee referee;
  Player* winner = referee.refGame(player1, player2);
  if (winner == nullptr) {
    cout << "Tie" << endl;
  } else {
    cout << winner->getName() << " won" << endl;
  }
  return 0;
}