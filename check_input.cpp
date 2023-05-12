#include "main.h"
int check_input(int position, char board[][8])
{
    if(position <=0 || position > 8)
        return 1;
    else if(board[0][position - 1] == 'X' || board[0][position - 1] == 'O')
        return 2;

    return 0;
}