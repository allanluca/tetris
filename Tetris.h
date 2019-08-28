/*
jogo tetris implementado em linguagem C para o uso no terminal de comando 
Autor: Allan Lucas Andrade Bomfim
Data: 28/08/2019
*/

#include <stdio.h>
#include <stdlib.h>
/*Configurações das dimenssões de linha*/
#define  COLLUMNS 60
#define ROWS 25

/* Inicializa a matriz princial com espaço vazio */
void printMatrix(char matrix[ROWS][COLLUMNS]);

/* Mostra o conteudo da matris principal na tela do computador */
void init(char matrix[ROWS][COLLUMNS]);

