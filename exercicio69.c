//
//crie uma matriz e um vetor dinâmico e imprima os 2 utilizando aritmética de ponteiros
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int *vet, **mat, linhas, colunas, tam;

    srand(time(NULL));
    printf("Digite o tamanho do vetor ->");
    scanf("%d", &tam);
    printf("Digite a quantidade de linhas da matriz e a quantidade de colunas ->");
    scanf("%d %d", &linhas, &colunas);

    vet = malloc(tam * sizeof(int));
    mat = malloc(linhas * sizeof(int*));

    for (int i = 0; i < linhas; ++i) {
        *(mat+i) = malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) { //preenchi a matriz
            *(*(mat+i)+j) = rand() % 100;
        }
    }

    for (int i = 0; i < tam; ++i) { //preenchi o vetor
        *(vet+i) = rand() % 100;
    }

    printf("\nVetor dinamico -> ");
    for (int i = 0; i < tam; ++i) {
        printf("%d ", *(vet+i));
    }

    printf("\n\nMatriz dinamica\n");
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            printf("%2d ", *(*(mat+i)+j));
        }
        printf("\n");
    }

    free(vet);
    free(mat);

    return 0;
}