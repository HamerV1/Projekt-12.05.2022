#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include "Player.h"
#include <conio.h>
#include <ctype.h>
using namespace std;
class User : public Player
{
    private:
        string name;
        int points;
    public:
        User(string name, int position_x, int position_y, char character, int max_index);
        void Move();
        void AddPoint();
        int GetPoints();
};

#endif // USER_H
