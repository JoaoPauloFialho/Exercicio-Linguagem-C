//
//Crie uma fila iterativa
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
    int num;
    struct no *proximo;
}No;

void insere_na_fila(No **fila, int num){
    setlocale(LC_ALL, "Portuguese");
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = NULL;
        if(*fila == NULL)
            *fila = novo;
        else{
            aux = *fila;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    } else
        printf("\nErro ao alocar memoria\n");
}

int remove_da_fila(No **fila){
   No *remover = NULL;
   if(*fila){
       remover = *fila;
       *fila = remover->proximo;
       return remover->num;
   } else
       printf("\nFila vazia\n");
}

void imprime_fila(No *fila){
    printf("\n-------------FIlA-------------\n");
    while(fila){
        printf("%d ", fila->num);
        fila = fila->proximo;
    }
    printf("\n-------------FIlA-------------\n");
}

int main(){
    No *fila = NULL;
    int escolha=0, num=0;

    do {
        printf("[1] INSERE\n[2] REMOVE\n[3] IMPRIMRE\n[4] ENCERRA");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("\nDIGITE UM NUMERO INTEIRO ->");
                scanf("%d", &num);
                insere_na_fila(&fila, num);
                break;
            case 2:
                printf("\nITEM REMOVIDO DA FILA -> %d\n", remove_da_fila(&fila));
                break;
            case 3:
                imprime_fila(fila);
                break;
            default:
                printf("\nINSIRA UM COMANDO VALIDO\n");
        }
    } while (escolha != 4);
    return 0;
}