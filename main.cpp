#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "drawboardplease.h"
#include "checkforwinplease.h"

using namespace std;

int main()
{
    //Zmienne, bo to dobre miejsce na zmienne
    char board[3][3];
    int choice = 0;
    bool badchoice = true;
    int wiersz, kolumna;
    int tura = 1;

    //Wypelnia tablice dwuwymiarowa spacjami
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }

    //Komunikacja z userem na starcie
    printf("TicTermToe beta 2 \n \n \n");

    printf("Wybierz tryb gry: \n");
    printf("1. Dwoje graczy \n");
    printf("2. Jeden gracz \n");
    printf("Twoj wybor: ");

    while(badchoice)
    {
        //Z niewiadomego powodu scanf robilo tu force close...
        //Powinienem przezucic sie w calosci na cstdio, na razie iostream
        cin >> choice;

        if(choice != 1 && choice != 2)
        {
            printf("Naprawde tak ciezko wybrac wlasciwa liczbe? \n");
            printf("Twoj wybor: ");
        }
        else badchoice = false;
    }

    //Odpal odpowiedni tryb
    switch (choice)
        {
        case 1:
            {
                printf("Zaczynamy! \n \n");
                printf("Tura %d \n", tura);
                while (checkwinx(board) == false && checkwino(board) == false)
                {
                    //Rysuje aktualny stan planszy
                    drawboard(board);

                    printf("Podaj wiersz(1, 2, lub 3): ");
                    cin >> wiersz;
                    printf("Podaj kolumne(1, 2, lub 3): ");
                    cin >> kolumna;

                    if (board[wiersz - 1][kolumna - 1] != ' ')
                    {
                        printf("To pole jest bledne, wybierz inne! \n");
                    }
                    else
                    {
                        board[wiersz - 1][kolumna - 1] = ((tura % 2) ? 'x' : 'o');
                        tura++;
                        printf("Tura %d \n", tura);
                    }

                }

                if(checkwinx == true)
                {
                    printf("Wygrywa gracz pierwszy w turze %d", tura);
                }

                if(checkwino == true)
                {
                }
            }
            break;

        case 2:
            {

            }
            break;
        }


    return 0;
}
