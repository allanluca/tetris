/*
jogo tetris implementado em linguagem C para o uso no terminal de comando 
para executar:
Autor: Allan Lucas Andrade Bomfim
Data: 28/08/2019
*/

#include "Tetris.h"
#include "display.h"

int main()
{
    char matrix[ROWS][COLLUMNS];
    int posI, posJ;
    posI = ROWS / 2;
    posJ = COLLUMNS / 2;
    init(matrix);

    ShowConsoleCursor(0);
    system("cls");
    while (1)
    {
       gotoxy(0,0); 

        matrix[posI][posJ] = '@';

        printMatrix(matrix);
        matrix[posI][posJ] = ' ';

        if (posJ < COLLUMNS)
            posJ++;
    }
    system("pause");
    return 0;
}
