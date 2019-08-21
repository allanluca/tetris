#include <stdio.h>
#include <stdlib.h>
#define  COLLUMNS 60
#define ROWS 25


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
void printMatrix(char matrix[ROWS][COLLUMNS]){
    int i ,j;
    for(i=0;i<ROWS;i++){
        for(j=0; j <COLLUMNS; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    char matrix[ROWS][COLLUMNS];
    int posI, posJ;
     posI= ROWS/2;
     posJ=COLLUMNS/2;
    init(matrix);

    while(1){
        system("cls");

        matrix[posI][posJ] = '@';

        printMatrix(matrix);
        matrix[posI][posJ] = ' ';

        if( posJ < COLLUMNS) posJ++;
        
 }
    system("pause");
    return 0;
}