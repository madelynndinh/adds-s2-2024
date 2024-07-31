
#include "Referee.h"

#include "Move.h"
#include "Player.h"

Referee::Referee(/* args */) {}
Player* Referee::refGame(Player* player1, Player* player2) {
  Move* m1 = player1->makeMove();
  Move* m2 = player2->makeMove();
  Move move;
  Move* winnerMove = move.beats(m1, m2);
  if (winnerMove == nullptr) {
    return nullptr;
  } else if (winnerMove == m1) {
    return player1;
  } else {
    return player2;
  }
};