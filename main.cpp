#include <iostream>
#include "Board2.h"
#include "Player.h"
#include "User.h"
using namespace std;



int main()
{
    Board b(3);
    User u("Piotrek", 3, 3,'g',b.GetBoardSize());
    while(true)
    {

        u.Move();
        system("cls");
        cout<<u.GetPositionX()<<" " << u.GetPositionY()<<"\n";
        b.Reset();
        b.setPosition('g', u.GetPositionX(), u.GetPositionY());
        b.displayBoard();
    }
    return 0;
}
