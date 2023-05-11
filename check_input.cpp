#include "main.h"
bool check_input(int position)
{
    if(position <=0 || position > 8)
        return false;
    else if(board[0][position - 1] == 'X' || board[0][position - 1] == 'O')
        return false;

    return true;
}