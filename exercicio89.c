//
// Faca um programa que calcule o tamanho de uma arvore, a quantidade de nós e a quantidade de folhas
//

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
   int num;
   struct no *direita, *esquerda;
}No;

int descobre_tam(No *raiz){
    if(raiz== NULL){
        return -1;
    } else{
        int esq = descobre_tam(raiz->esquerda);
        int dir = descobre_tam(raiz->direita);
        if(esq>dir)
            return esq + 1;
        else
            return dir + 1;
    }
}

int descobre_nos(No *raiz){
    if(raiz==NULL) {
        return 0;
    } else{
        return 1 + descobre_nos(raiz->esquerda) + descobre_nos(raiz->direita);
    }
}

int descobre_folhas(No *raiz) {
    if (raiz == NULL) {
        return 0;
    } else if (raiz->esquerda == NULL && raiz->direita == NULL)
        return 1;
    else
        return descobre_folhas(raiz->esquerda) + descobre_folhas(raiz->direita);
}

void insere(No **raiz, int num){
    No *aux = *raiz;
    while(aux){
        if(num > aux->num)
            raiz = &aux->direita;
        else
            raiz = &aux->esquerda;
        aux = *raiz;
    }
    aux = malloc(sizeof(No));
    aux->num = num;
    aux->esquerda = NULL;
    aux->direita = NULL;
    *raiz = aux;
}

void imprime(No *raiz){
    if(raiz){
        imprime(raiz->esquerda);
        printf("%d ", raiz->num);
        imprime(raiz->direita);
    }
}

No *remover(No *raiz, int chave) {
    if (raiz == NULL) {
        printf("Valor nao encontrador");
        return NULL;
    } else {
        if (raiz->num == chave) {
            if (raiz->num == chave && raiz->direita == NULL && raiz->esquerda == NULL) {
                free(raiz);
                return NULL;
            } else {
                if (raiz->esquerda != NULL && raiz->direita != NULL) {
                    No *aux = raiz->esquerda;
                    while (aux->direita)
                        aux = aux->direita;
                    raiz->num = aux->num;
                    aux->num = chave;
                    raiz->esquerda = remover(raiz->esquerda, chave);
                    return raiz;
                } else {
                    No *aux;
                    if (raiz->direita)
                        aux = raiz->direita;
                    else
                        aux = raiz->esquerda;
                    free(raiz);
                    return aux;
                }
            }
        }
    }if (raiz->num < chave)
        raiz->direita = remover(raiz->direita, chave);
    else
        raiz->esquerda = remover(raiz->esquerda, chave);
    return raiz;
}

int main(){
    No *raiz = NULL;
    insere(&raiz, 9);
    insere(&raiz, 7);
    insere(&raiz, 6);
    insere(&raiz, 10);
    insere(&raiz, 1);
    insere(&raiz, 11);
    imprime(raiz);
    printf("\n");
    remover(raiz, 6);
    imprime(raiz);
    printf("\n");
}