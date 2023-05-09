
#include "main.h"
void DisplayBoard(char board[][8])
{
	int rows = 8, columns = 8, i, ix;
	cout<<"  1 2 3 4 5 6 7 8\n";
	for(i = 0; i < rows; i++)
	{
		cout << "| ";
		for(ix = 0; ix < columns; ix++)
		{
			if(board[i][ix] != 'X' && board[i][ix] != 'O')
				board[i][ix] = '*';

			cout << board[i][ix]<<" ";
			
		}

		cout << "|" << endl;
	}
}