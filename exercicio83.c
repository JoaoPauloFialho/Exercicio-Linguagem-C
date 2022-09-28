//
// Crie uma lista duplamente encadeada e preencha a mesma iterativamente
//

#include <stdlib.h>
#include <stdio.h>

typedef struct no{
   int num;
   struct no *proximo;
   struct no *anterior;
}No;

void inserir_comeco(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = *lista;
        novo->anterior = NULL;
        if((*lista))
            (*lista)->anterior = novo;
        *lista = novo;
    } else printf("Erro ao alocar memoria");
}

void inserir_no_final(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        if((*lista) == NULL){
            novo->proximo = *lista;
            novo->anterior = NULL;
            *lista = novo;
        } else{
            aux = *lista;
            while(aux->proximo){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo->anterior = novo;
            novo->anterior = aux; // 1 2 3 4 5
            aux->proximo = novo;
        }
    } else printf("Erro ao alocar memoria");
}

void inserir_no_indice(No **lista, int indice, int num){
    No *aux, *novo = malloc(sizeof(No));
    int acum=0;
    if(novo){
       novo->num = num;
       if((*lista) == NULL || indice == 0){
           novo->proximo = NULL;
           novo->anterior = NULL;
           *lista = novo;
       } else{
           aux = *lista;
           while(aux->proximo && acum!=indice)
                aux = aux->proximo;
           novo->proximo = aux->proximo;
           aux->proximo->anterior = novo;
           novo->anterior = aux;
           aux->proximo = novo;
       }
    } else printf("Erro ao alocar memoria");
}

void imprime_pares(No *lista){
    printf("\nLISTA\n");
    while(lista){
        printf("\tTermo -> %d\n", lista->num);
        lista = lista->proximo;
    }
    printf("\nLISTA\n");
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
                inserir_comeco(&lista, num);
                tam++;
                break;
            case 2:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                printf("\nDigite qual numero voce quer que a pos dele seja inserido o numer ->");
                scanf("%d", &param);
                inserir_no_indice(&lista, num, param);
                break;
            case 3:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                inserir_no_final(&lista, num);
                break;
            case 4:
                imprime_pares(lista);
                break;
            default:
                printf("Digite dados validos");
        }
    } while (escolha != 0);
}