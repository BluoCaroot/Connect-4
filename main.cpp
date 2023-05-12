#include "main.h"
/**
 * main - the function where the game starts
 * takes input from user to choose game mode then initates game,
 * calls other functions to keep the game by the rules
 * stops only when check_win returns a non zero integer
 * Return: always 0 on success
 */
int main()
{
	string menu = "                    Welcome to Connect 4 game\nChoose gamemode:\n0.Player Vs Player\n1.Player Vs AI\n";
	char board[8][8], c;
	int win = 0, temp, x;
	bool ai = 0,player = 0, again = 0;

	cout << menu;
	cin >> ai;
	DisplayBoard(board);
	while (!win)
	{
		if ((player && !ai) || (!player))
		{
			cout << "Player " << player + 1 << " please enter a number: ";
			cin >> x;
			while (temp = check_input(x, board))
			{
				if (temp == 1)
					cout << "Illegal input, Please input a number between 1 and 8: ";
				else
					cout << "Column full, please choose another number: ";
				cin >> x;
			}
			process_input(x, board, player);
			if (temp = check_win(board))
			{
				if (temp == 1)
					win = 1;
				else
					win = 2;
			}
			DisplayBoard(board);
			if (win)
			{
				if (!ai)
					cout << "Player " << win << " wins\n";
				else
					cout << (win == 1? "You Win!!!" : "You lose...");			
				cout << "Play again? (Y/n) ";
				cin >> c;
				while (tolower(c) != 'y' || tolower(c) != 'n')
				{
					cout << "Please enter a valid input\n";
					cin >> c;
				}
				if (tolower(c) == 'y')
				{
					char board[8][8];
					DisplayBoard(board);
					win = 0;
					player = 0;
					continue;
				}
				else
					break;

			}
			player = !player;
		}
		if (ai)
		{
			Ai(board);
			player = 0;
		}
	}
	cout << "Thank you for playing <3.";
	return (0);
}
