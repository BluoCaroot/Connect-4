#ifndef MAIN_H
#define MAIN_H

#include <iostream>

using namespace std;
int check_win(char board[][8]);
int check_input(int position, char board[][8]);
void process_input(int position, char board[][8], bool player);
void DisplayBoard(char board[][8]);
void Ai(char board[][8]);
#endif
