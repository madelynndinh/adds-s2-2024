#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"

int main()
{
    Player* player1 = new Human();
    player1->setName("Mei");
    player1->setMove();
    Player* player2 = new Computer();
    Referee referee;
    Player* winner = referee.refGame(player1, player2);
    if (winner==nullptr)
    {
        cout<<"Tie"<<endl;
    }
    else
    {
        cout<<winner->getName()<<" won"<<endl;
    }
    return 0;
}