/*
jogo tetris implementado em linguagem C para o uso no terminal de comando 
Autor: Allan Lucas Andrade Bomfim
Data: 28/08/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Configuração das dimensões da matriz principal do jogo
#define COLUMNS 30
#define ROWS 30



// configura o teclado
#define ESC 27
#define ARROWS 224
#define LEFT 75
#define RIGHT 77
#define TECLA_A 97
#define TECLA_D 100
#define tecla_a 65
#define tecla_d 68
#define tecla_Espaco 32

// ORIENTAÇÕE PARA AS APEÇAS
#define ORIENTACAO_UP 1
#define ORIENTACAO_LEFT 2
#define ORIENTACAO_down 3
#define ORIENTACAO_RIGHT 4

//CRIANDO TIPOS DE PEÇAS
#define TIPO_L 1
#define TIPO_L_R 2 //L  reverso
#define TIPO_T 3
#define TIPO_Z 4
#define TIPO_Z_R 5 //Z reverso
#define TIPO_O 6   // quadrado
#define TIPO_I 7

//configurações de layout
#define PIXEL 219
#define EMPTY 32

// estrutura padrão de componente
typedef struct 
{
    int i;             // posição nas linhas na matriz
    int j;             // posição linhas colunas
    int orientacao;    // orientação da peças
    int tipo;          // o tipo de peça (7 posição)
    int width;         // largura
    int height;        // altura
}Bloco;



/*
    Inicializa a matriz principal com 'espaços vazios'
*/
void init(char matrix[ROWS][COLUMNS]);

/*
    Mostra o conteúdo da matriz principal na tela 
    do computador.
*/
void printMatrix(char matrix[ROWS][COLUMNS]);

/* desenhar uma barra usando o simbolo do caracter ASCII passando por parrametro.*/

void drawBar(char matrix [ROWS][COLUMNS],Bloco barra, int simbolo);

