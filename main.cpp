#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "drawboardplease.h"

using namespace std;

int main()
{
    char board[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }

    drawboard(board);

    return 0;
}
