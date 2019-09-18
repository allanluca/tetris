/*
jogo tetris implementado em linguagem C para o uso no terminal de comando 
Autor: Allan Lucas Andrade Bomfim
Data: 28/08/2019
*/

#include <stdio.h>
#include <stdlib.h>
//Configuração das dimensões da matriz principal do jogo
#define COLUMNS 60
#define ROWS 25

/*
    Inicializa a matriz principal com 'espaços vazios'
*/
void init(char matrix[ROWS][COLUMNS]);

/*
    Mostra o conteúdo da matriz principal na tela 
    do computador.
*/
void printMatrix(char matrix[ROWS][COLUMNS]);

