
#include "Referee.h"

Referee::Referee(/* args */)
{
}
 Player* Referee::refGame(Player* player1, Player* player2)
{
    char move;
    std::cout<<"Enter move: ";
std::cin>>move;
   player1->setMove(move);
    if (player1->makeMove()=='S')
    {
        return player2;
    }
    if (player1->makeMove()=='P')
    {
        return player1;
    }
    else
    {
        return nullptr;
    }
    
    
};