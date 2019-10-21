/*
jogo tetris implementado em linguagem C para o uso no terminal de comando 
para executar:
Autor: Allan Lucas Andrade Bomfim
Data: 28/08/2019
*/

#include "Tetris.h"
#include "display.h"
#define  DEBUG 1

int main(){
    char matrix[ROWS][COLUMNS];
    Bloco tijolo;
    int keypressed=0;

    //posicao inicial
    tijolo.i = 0;
    tijolo.j = COLUMNS/2;
    tijolo.tipo = TIPO_I;
    tijolo.orientacao = ORIENTACAO_LEFT;
    tijolo.width= 1;
    tijolo.height= 4;
    tijolo.width=5;
    tijolo.height=1;
    
    //inicializando matriz
    init(matrix);

    //apagar o cursor da tela
    ShowConsoleCursor(0);
    system("cls");

    //animação do jogo
    while(keypressed !=ESC ){        
        gotoxy(0,0);

        #if DEBUG == 1
            printf("posicao = (%d, %d)\n",tijolo.i, tijolo.j);
            printf("dimensao = (%d, %d)\n",tijolo.width, tijolo.height);
        #endif

        //posicionar o @ no meio da tela 
        drawBar(matrix, tijolo, PIXEL);
        


        //mostro a matriz na tela
        printMatrix(matrix);

        //faça posição anterior do @ ser apagada
        

        drawBar(matrix, tijolo, EMPTY);
       
        
        //faço a posição da @ ir para a direita
        if(tijolo.i < (ROWS-1)) tijolo.i++;

        //lendo teclas
        keypressed=0;
        if(kbhit()) keypressed=getch();
        if(keypressed==224) keypressed = getch();

        switch(keypressed){
            case TECLA_A:
            case tecla_a:
            case LEFT:
                 if(tijolo.j- (tijolo.width/2)> 0) tijolo.j--; //vai para esquerda 
                 break;

            case TECLA_D:
            case tecla_d:     
            case RIGHT: 
            if((tijolo.j +(tijolo.width/2)) < (COLUMNS-1)) tijolo.j++;//vai para direita
            break; 
            case tecla_Espaco:
            if (tijolo.orientacao== ORIENTACAO_RIGHT)
            tijolo.orientacao=ORIENTACAO_UP;
                else
                tijolo.orientacao++;

            //iverte as orientações//
            int aux =tijolo.width;
            tijolo.width= tijolo.height;
            tijolo.height=aux;


            if(tijolo.j < (tijolo.width/2))
                tijolo.j= tijolo.width/2;
            else if (tijolo.j> COLUMNS-(tijolo.width/2)-1)
                tijolo.j = COLUMNS - (tijolo.width/2)-1 ;   
        }
        
    }

    system("pause");

    return 0;
}
