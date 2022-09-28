//
//Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
//em uma matriz C. Imprima as três matrizes.
//

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

    int A[3][3], B[3][3], C[3][3];
    srand(time(NULL));

    //criando matriz A, B e C ao mesmo tempo
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            A[i][j] = rand()%10;
            B[i][j] = rand()%10;
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    //abaixo só tem as impressões das matrizes
    printf("\nMatriz A");
    for (int i = 0; i<3; i++){
        printf("\n");
        for (int j = 0; j<3; j++){
            printf("%d ", A[i][j]);
        }
    }

    printf("\nMatriz B");
    for (int i = 0; i<3; i++){
        printf("\n");
        for (int j = 0; j<3; j++){
            printf("%d ", B[i][j]);
        }
    }
    printf("\nMatriz C (A + B)");
    for (int i = 0; i<3; i++){
        printf("\n");
        for (int j = 0; j<3; j++){
            printf("%d ", C[i][j]);
        }
    }

    return 0;
}
