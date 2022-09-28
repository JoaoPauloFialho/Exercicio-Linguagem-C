//
// Crie um procedimento parar inserir valores numa lista de forma ordenada
//

#include <stdlib.h>
#include <stdio.h>

typedef struct no{
    int num;
    struct no *proximo;
}No;

int encontra_maior(No *lista){
    int maior=lista->num;
    while(lista){
        if(lista->num > maior)
            maior = lista->num;
        lista = lista->proximo;
    }
    return maior;
}

void inserir_ordenado(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = NULL;
        if(*lista == NULL){
            *lista = novo;
        } else if(novo->num < (*lista)->num) {
            novo->proximo = *lista;
            *lista = novo;
        } else{
            aux = *lista;
            while(aux->proximo && novo->num > aux->proximo->num)
                aux = aux -> proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    } else printf("Erro na alocacao de memoria");
}

void insere_comeco(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = *lista;
        *lista = novo;
    } else printf("Erro na alocacao de memoria");
}

void insere_meio(No **lista, int num, int param){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        if(*lista == NULL){
            *lista = novo;
        } else{
            aux = *lista;
            while(aux->proximo && aux->num != param)
                aux = aux -> proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    } else printf("Erro na alocacao de memoria");
}

void insere_final(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = NULL;
        if((*lista) == NULL){
            *lista = novo;
        } else{
            aux = *lista;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    } else printf("Erro na alocacao de memoria");
}

void imprime(No *lista, int tam){
    printf("\nLISTA");
    printf("\n");
    while(lista){
        printf("%d - ", lista->num);
        lista = lista->proximo;
    }
    printf("\nLISTA");
    printf("\n");
}

int main() {
    No *lista = NULL;
    int escolha = 0, num, tam = 0, param = 0;
    do {
        printf("\n[1] INSERIR NO COMECO\n[2] INSERIR NO MEIO\n[3] INSERIR NO FINAL\n[4] IMPRIMIR\n[5] INSERIR ORDENADO\n[0] SAIR");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                insere_comeco(&lista, num);
                tam++;
                break;
            case 2:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                printf("\nDigite qual numero voce quer que a pos dele seja inserido o numer ->");
                scanf("%d", &param);
                insere_meio(&lista, num, param);
                break;
            case 3:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                insere_final(&lista, num);
                break;
            case 4:
                imprime(lista, tam);
                break;
            case 5:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                inserir_ordenado(&lista, num);
                break;
            default:
                printf("Digite dados validos");
        }
    } while (escolha != 0);
}