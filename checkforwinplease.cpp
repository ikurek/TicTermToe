#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "drawboardplease.h"
#include "checkforwinplease.h"

bool checkwinx(char board[3][3])
{
    //Probowalem petli, wkurwily mnie
    //Rozwiazania silowe sa najlepsze :-D

    if(board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x') return true;
    if(board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x') return true;
    if(board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x') return true;
    if(board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x') return true;
    if(board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x') return true;
    if(board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x') return true;
    if(board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') return true;
    if(board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x') return true;
    return false;
}

bool checkwino(char board[3][3])
{
    if(board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o') return true;
    if(board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o') return true;
    if(board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o') return true;
    if(board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o') return true;
    if(board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o') return true;
    if(board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o') return true;
    if(board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') return true;
    if(board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o') return true;
    return false;
}

bool checkdraw(char board[3][3])
{
    return true;
}
