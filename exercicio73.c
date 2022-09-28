//
// Inverta uma string utilizando pilha
// ABRE A PORTA
// ERBA A ATROP

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct no{
   char caractere;
   struct no *proximo;
}No;

No* empilhar(No *topo, char caractere){
    No *novo = malloc(sizeof(No));
    char string[100];

    if(novo){
        novo->caractere = caractere;
        novo->proximo = topo;
        return novo;
    } else
        printf("Erro ao alocar memoria");
}

No* desempilhar(No **topo){
    No *remover = NULL;
    if(topo){
        remover = *topo;
        *topo = remover->proximo;
        return remover;
    } else
        printf("Pilha vazia");
}

char inverte_string(No* pilha, char string[]){
    No *remover = NULL;
    for (int i = 0; i < strlen(string); ++i) {
        if(string[i] == ' '){
            while (pilha) {
                remover = desempilhar(&pilha);
                printf("%c", remover->caractere);
                free(remover);
            }
            printf(" ");
        } else
            pilha = empilhar(pilha, string[i]);
    }
    while (pilha) {
        remover = desempilhar(&pilha);
        printf("%c", remover->caractere);
        free(remover);
    }
}


int main(){
    No *topo = NULL;
    char string[100] = {""};
    printf("Digite uma string ->");
    scanf("%99[^\n]", &string);
    inverte_string(topo, string);

    return 0;
}