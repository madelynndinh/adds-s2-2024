
#include "Referee.h"

Referee::Referee(/* args */)
{
}
 Player* Referee::refGame(Player* player1, Player* player2)
{
   
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