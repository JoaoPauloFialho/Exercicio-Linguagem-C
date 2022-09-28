//
// Gere uma lista C a partir de duas listas A e B
//

#include <stdlib.h>
#include <stdio.h>

typedef struct no{
   int num;
   struct no *proximo;
}No;

void insere_lista(No **lista, int num) {
    No *aux, *novo = malloc(sizeof(No));
    if (novo) {
        novo->num = num;
        if ((*lista) == NULL) {
            novo->proximo = *lista;
            *lista = novo;
        } else{
            aux = *lista;
            while (aux->proximo){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    } else printf("Erro ao alocar memoria");
}

void imprimir_lista(No *lista){
    if(lista){
        printf("\nLISTA\n");
        while (lista){
            printf("%d ", lista->num);
            lista = lista->proximo;
        }
        printf("\nLISTA\n");
    }
}

void concatena_listas(No *listaA, No *listaB, No **listaC){
    No *aux = NULL;
    while(listaA){
        insere_lista(listaC, listaA->num);
        listaA = listaA->proximo;
    }
    while(listaB){
        insere_lista(listaC, listaB->num);
        listaB = listaB->proximo;
    }
}

int main(){
    No *listaA = NULL;
    No *listaB = NULL;
    No *listaC = NULL;
    insere_lista(&listaA, 1);
    insere_lista(&listaA, 2);
    insere_lista(&listaA, 3);
    insere_lista(&listaA, 4);
    insere_lista(&listaA, 5);
    insere_lista(&listaB, 6);
    insere_lista(&listaB, 7);
    insere_lista(&listaB, 8);
    insere_lista(&listaB, 9);
    insere_lista(&listaB, 10);
    imprimir_lista(listaA);
    imprimir_lista(listaB);
    concatena_listas(listaA, listaB, &listaC);
    imprimir_lista(listaC);
    return 0;
}