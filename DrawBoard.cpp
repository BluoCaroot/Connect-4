#include<bits/stdc++.h>
using namespace std;
void DisplayBoard(char board[][10]);
int main()
{
	char board[9][10]; 
	DisplayBoard( board );
    return 0;

}
void DisplayBoard ( char board[][10] )
{
	int rows = 8, columns = 8, i, ix;
	cout<<"  1 2 3 4 5 6 7 8\n";
	for(i = 1; i <= rows; i++)
	{
		cout << "| ";
		for(ix = 1; ix <= columns; ix++)
		{
			if(board[i][ix] != 'X' && board[i][ix] != 'O')
				board[i][ix] = '*';

			cout << board[i][ix]<<" ";
			
		}

		cout << "|" << endl;
	}
}