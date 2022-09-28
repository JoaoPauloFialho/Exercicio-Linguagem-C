//
//Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
//tela.
//

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

    int A[5][4], B[4][5], linhaA = 0, colunaA = 0;
    srand(time(NULL));

    //cria e imprime matriz A
    printf("Matriz A");
    for (int i = 0; i < 5; ++i) {
        printf("\n");
        for (int j = 0; j < 4; ++j) {
            A[i][j] = rand()%10;
            printf("%d ", A[i][j]);
        }
    }

    //cria e imprime matriz B
    printf("\nMatriz B");
    for (int i = 0; i < 4; i++){
        printf("\n");
        for (int j = 0; j < 5; j++){
            B[j][i] = A[j][i];
            printf("%d ", B[j][i]);
        }
    }


    return 0;
}