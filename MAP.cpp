// Asmaa Elsayed //
//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <deque>
#include <string>
#include <algorithm>
#include <list>
#include <set>
#include <stack>
#include <queue>
#define ll long long
#define fast  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
char iswinning(char arr[8][8]) {
    for (int i = 0; i < 8; ++i) {
        // row
        char c;
        for (int j = 0; j <8; ++j) {
            if (arr[i][j] == 'X' || arr[i][j] == 'O') {
                c = arr[i][j];
                int one = 1;
                for (int k =j; k < 8; ++k) {
                    if (arr[j][k + 1] == c) {
                        one++;
                    }
                    else
                        one=0;
                    
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
                     one = 0;
                    for (int f = j; f < 8; ++f) {
                        if (arr[f][j] == c) 
                            one++;
                        
                        else 
                            one=0;
                        
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
                        for (int g= 0; g < 8; ++g) {
                            if (arr[g][g] == c)
                                one++;
                            else
                                one = 0;
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
   

int main() {
   

    return 0;
}