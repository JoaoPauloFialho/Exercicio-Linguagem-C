//
// Crie um procedimento para remover o nó de uma lista
//

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
   int num;
   struct no *proximo;
}No;

No* empilha(No *topo, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = topo;
        return novo;
    }
}

void insere_fila(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num;
        novo->proximo = NULL;
        if((*fila) == NULL)
            *fila = novo;
        else {
            if(num>59){
                aux = *fila;
                while(aux->proximo && aux->proximo->num < 59)
                    aux = aux->proximo;
                novo->proximo = aux->proximo;
                aux->proximo = novo;
            } else{
                aux = *fila;
                while(aux->proximo)
                    aux = aux->proximo;
                novo->proximo = aux->proximo;
                aux->proximo = novo;
            }
        }
    } else printf("Erro ao alocar memoria");
}

void insere(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = *lista;
        *lista = novo;
    } else printf("Erro ao alocar memorioa");
}

void imprime(No *lista) {
    printf("\nLISTA\n");
    while (lista){
        printf("%d - ", lista->num);
        lista = lista->proximo;
    }
    printf("\nLISTA\n");
}

void remove_lista(No **lista, int param) {
    No *aux, *remove = NULL;
    if (*lista) {
        if((*lista)->num == param){
            remove = *lista;
            *lista = remove->proximo;
        } else {
            aux = *lista;
            while (aux->proximo && aux->proximo->num != param)// 1 2 3 4 5
                aux = aux->proximo;
            if(aux->proximo) {
                remove = aux->proximo;
                aux->proximo = remove->proximo;
            }
        }
    }
}

int main(void){
    No *lista = NULL;
    insere(&lista, 1);
    insere(&lista, 2);
    insere(&lista, 3);
    insere(&lista, 4);
    insere(&lista, 5);
    insere(&lista, 6);
    imprime(lista);
    remove_lista(&lista, 6);
    remove_lista(&lista, 2);
    remove_lista(&lista, 3);
    imprime(lista);

    return 0;
}
