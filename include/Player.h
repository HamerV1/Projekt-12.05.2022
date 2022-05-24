#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    protected:
        int position_x;
        int position_y;
        char character;
        int max_index;
    public:
        Player();
        Player(int position_x, int position_y, char character, int max_index);
        virtual void Move() = 0;
        int GetPositionX();
        int GetPositionY();
        char GetCharcter();
        int GetMaxIndex();
};

#endif // PLAYER_H
