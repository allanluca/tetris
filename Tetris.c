/*
jogo tetris implementado em linguagem C para o uso no terminal de comando 
Autor: Allan Lucas Andrade Bomfim
Data: 28/08/2019
*/
#include "Tetris.h"

/* Inicializa a matriz princial com espaço vazio */
void init(char matrix[ROWS][COLLUMNS]){
    int i,j;

    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLLUMNS; j++)
        {
            matrix[i][j]= ' ';

        }
    }
}

/* Mostra o conteudo da matris principal na tela do computador */
void printMatrix(char matrix[ROWS][COLLUMNS]){
    int i ,j;
    for(i=0;i<ROWS;i++){
        for(j=0; j <COLLUMNS; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");

    }
}