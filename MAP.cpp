#include "main.h"
int chek_win(char board[8][8]) 
{
    for (int i = 0; i < 8; ++i) {
        // row
        char c;
        for (int j = 0; j <8; ++j) {
            if (board[i][j] == 'X' || board[i][j] == 'O') {
                c = board[i][j];
                int one = 1;
                for (int k =j; k < 8; ++k) {
                    if (board[j][k + 1] == c) {
                        one++;
                    }
                    else
                        break;
                    
                }
                if (one >= 4)
                {
                    if (c == 'x')
                        cout << "player x won\n";
                    else
                        cout << "player o won\n";
                    return c;
                }
                // column
                else if (one <4)
                {
                     one = 1;
                    for (int f = j; f < 8; ++f) {
                        if (board[f][j] == c) 
                            one++;
                        
                        else 
                            break;
                        
                    }
                    if (one >= 4)
                    {
                        if (c == 'x')
                            cout << "player x won\n";
                        else
                            cout << "player o won\n";
                        return c;
                    }//diagonal
                    else
                    {
                        one=0;
                        for (int g= 0; g < 8; ++g) {
                            if (board[g][g] == c)
                                one++;
                            else
                                break;
                        }
                        if (one >= 4)
                        {
                            if (c == 'x')
                                cout << "player x won\n";
                            else
                                cout << "player o won\n";
                            return c;
                        }
                    }
                }
            }
        }
    }
}
