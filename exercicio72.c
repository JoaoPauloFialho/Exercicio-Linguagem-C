//
// Simule uma recursão do fatorial utilizando uma pilha
//

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int fat;
    struct no *proximo;
}No;

No* empilhar(No *topo, int fat){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->fat = fat;
        novo->proximo = topo;
        return novo;
    } else
        printf("Erro ao alocar memoria\n");
    return NULL;
}

No* desempilha(No **topo){
    if(*topo){
        No* remover = *topo;
        *topo = remover->proximo;
        return remover;
    } else
        printf("Pilha vazia\n");
    return NULL;
}

int simula_recursao_fat(int fat){
    No *topo = NULL;
    int acum = 1;
    for (int i = 1; i <= fat; ++i) {
        topo = empilhar(topo, i);
    }
    while (topo){
        No *remover = NULL;
        remover = desempilha(&topo);
        acum = acum * remover->fat;
        free(remover);
    }
    return acum;
}

int main(void){
    int fat;

    printf("Digite um numero inteiro -> ");
    scanf("%d", &fat);
    printf("\nFatorial -> %d",simula_recursao_fat(fat));

    return 0;
}