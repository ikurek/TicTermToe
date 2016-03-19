#ifndef CHECKFORWINPLEASE_H_INCLUDED
#define CHECKFORWINPLEASE_H_INCLUDED

bool checkwinx(char board[3][3]);
bool checkwino(char board[3][3]);
bool checkdraw(char board[3][3], int tura);
void tellmewhowon(char board[3][3], int tura);

#endif // CHECKFORWINPLEASE_H_INCLUDED
