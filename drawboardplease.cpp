#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "drawboardplease.h"
#include "checkforwinplease.h"

using namespace std;

void drawboard(char board[3][3])
{
    printf(" %c | %c | %c  \n", board[0][0], board[0][1], board[0][2]);
    printf("----------- \n");
    printf(" %c | %c | %c  \n", board[1][0], board[1][1], board[1][2]);
    printf("----------- \n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}
