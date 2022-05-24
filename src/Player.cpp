#include "Player.h"
#include <iostream>
Player::Player(int position_x, int position_y, char character, int max_index) : position_x{position_x}, position_y{position_y}, character{character}, max_index{max_index}
{

}

int Player::GetPositionX()
{
    return this->position_x;
}
int Player::GetPositionY()
{
    return this->position_y;
}
char Player::GetCharcter()
{
    return this->character;
}
int Player::GetMaxIndex()
{
    return this->max_index;
}


