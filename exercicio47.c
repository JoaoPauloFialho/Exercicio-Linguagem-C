//
//Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.
//

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

    int matriz[5][7], soma = 0;
    srand(time(NULL));

    //preenchendo a matriz
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 7; ++j) {
            matriz[i][j] = rand()%100;
        }
    }
    printf("Matriz");
    //imprimindo a matriz e somando
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 7; ++j) {
            soma += matriz[i][j];
            printf("%d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\nSoma dos valores -> %d", soma);
    return 0;
}