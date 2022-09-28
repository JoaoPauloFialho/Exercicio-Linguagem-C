//
//Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
//

# include <stdlib.h>
# include <stdio.h>
# include <time.h>

int main(){

    int matriz[5][5], cont = 4, tam = 5;
    srand(time(NULL));

    //cria e imprime a matriz
    printf("Matriz");
    for (int i = 0; i < tam; ++i) {
        printf("\n");
        for (int j = 0; j < tam; ++j){
            matriz[i][j] = rand()%10;
            printf("%d ", matriz[i][j]);
        }
    }

    //imprime a diagonal principal
    printf("\nDiagonal principal -> \n");
    for (int i = 0; i < tam; ++i) {
        for (int j = 0; j < tam; ++j) {
            if (j == i)
                printf("%d ", matriz[i][i]);
            else
                printf(" ");
        }
        printf("\n");
    }

    //imprime a diagonal secundaria
    printf("\nDiagonal secundaria -> \n");
    for (int i = 0; i < tam ; ++i) {
        for (int j = 0; j < tam; ++j) {
            if(j == i) {
                printf("%d ", matriz[i][cont]);
                cont--;
            } else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}