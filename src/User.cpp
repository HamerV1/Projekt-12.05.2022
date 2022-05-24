#include "User.h"

User::User(string name, int position_x, int position_y, char character, int max_index) : Player(position_x, position_y, character, max_index)
{
    this->name = name;
}


void User::AddPoint()
{
    this->points++;
}
int User::GetPoints()
{
    return this->points;
}
void User::Move()
{
    cout<<"Type a-left, s-down, d-right, w-top"<<endl;
    char choice = _getch();
    cout<<choice<<endl;
    switch(choice)
    {
    case 'a':
        if(this->position_x > 0)
        {
            this->position_x--;
        }
        else
        {
            this->position_x = this->max_index;
        }
        break;
    case 's':
        if(this->position_y > this->max_index)
        {
            this->position_y++;
        }
        else
        {
           this->position_y = 0;
        }
        break;
    case 'w':
        if(this->position_y > 0)
        {
            this->position_y--;
        }
        else
        {
            this->position_y = this->max_index;
        }

        break;
    case 'd':
        if(this->position_x > this->max_index)
        {
            this->position_x++;

        }
        else
        {
            this->position_x = 0;
        }
        break;

    }
}
