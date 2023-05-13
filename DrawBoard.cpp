#include "main.h"
void DisplayBoard(char board[][8])
{
	system("cls");
	int rows = 8, columns = 8, i, ix;
	cout<<"  1 2 3 4 5 6 7 8\n";
	for(i = 0; i < rows; i++)
	{
		cout << "| ";
		for(ix = 0; ix < columns; ix++)
		{
			if(board[i][ix] != 'X' && board[i][ix] != 'O')
				board[i][ix] = '*';
			if(board[i][ix]=='X')cl(12);
			else if(board[i][ix]=='O')cl(14);
			else cl(3);
			cout << board[i][ix]<<" ";
			
		}
		cl(7);
		cout << "|" << endl;
	}
}