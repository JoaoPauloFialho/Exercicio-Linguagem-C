//
// crie um procedimento que divide uma lista A em duas listas, B com os pares e C com os ímpares
//

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
   int num;
   struct no *proximo;
}No;

void insere_valor(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        if((*lista) == NULL){
            novo->proximo = *lista;
            *lista = novo;
        } else{
            aux = *lista;
            while(aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    } else printf("Erro ao alocar memoria");
}

void imprimir_lista(No *lista){
    printf("\nLISTA\n");
    while(lista){
        printf("%d -", lista->num);
        lista = lista->proximo;
    }
    printf("\nLISTA\n");
}

void separa_par_impar(No *listaA, No **listaB, No **listaC){
    No *aux;
    int num=0;
    while(listaA->proximo){
        if(listaA->num % 2 == 0){
            insere_valor(listaB, listaA->num);
        } else{
            insere_valor(listaC, listaA->num);
        }
        listaA = listaA->proximo;
    }
}


int main(){
    No *listaA = NULL;
    No *listaB = NULL;
    No *listaC = NULL;
    insere_valor(&listaA, 1);
    insere_valor(&listaA, 2);
    insere_valor(&listaA, 3);
    insere_valor(&listaA, 4);
    insere_valor(&listaA, 5);
    insere_valor(&listaA, 6);
    insere_valor(&listaA, 7);
    insere_valor(&listaA, 8);
    insere_valor(&listaA, 9);
    insere_valor(&listaA, 10);
    imprimir_lista(listaA);
    separa_par_impar(listaA, &listaB, &listaC);
    printf("\nPARES\n");
    imprimir_lista(listaB);
    printf("\nIMPARES\n");
    imprimir_lista(listaC);
}