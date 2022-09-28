//
//Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
//a) some cada uma das linhas armazenando o resultado em um vetor;
//b) some cada uma das colunas armazenando o resultado em um vetor;
//c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
//

# include <stdlib.h>
# include <stdio.h>
# include <time.h>

int main(){

    int matriz[5][10], soma_linhas[5], soma_colunas[10], soma_linha, soma_coluna;
    srand(time(NULL));
    printf("Matriz");

    //cria a matriz e ja imprime ela
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 10; ++j) {
            matriz[i][j] = rand()%10;
            printf("%d ", matriz[i][j]);
        }
    }

    //soma as linhas a imprime o vetor de soma
    printf("\n");
    printf("\nSoma das linhas -> ");
    for (int i = 0; i < 5; ++i) {
        soma_linha = 0;
        for (int j = 0; j < 10; ++j) {
            soma_linha += matriz[i][j];
        }
        soma_linhas[i] = soma_linha;
        printf("%d ", soma_linhas[i]);
    }

    //soma as colunas
    printf("\n");
    printf("\nSoma das colunas -> ");
    for (int i = 0; i < 10; ++i) {
        soma_coluna = 0;
        for (int j = 0; j < 5; ++j) {
            soma_coluna += matriz[j][i];
        }
        soma_colunas[i] = soma_coluna;
        printf("%d ", soma_colunas[i]);
    }

    return 0;
}