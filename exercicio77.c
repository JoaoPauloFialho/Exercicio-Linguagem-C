//
// Crie uma fila de banco com prioridade para pessoas com mais de 60 anos
//1 2 3 4 5 6

#include <stdlib.h>
#include <stdio.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

void inserir_na_fila(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL){
            *fila = novo;
        } else{
            if(num > 59){
                if((*fila)->valor < 60){
                    novo->proximo = *fila;
                    *fila = novo;
                } else{
                    aux = *fila;
                    while (aux->proximo && aux->proximo->valor >59)
                        aux = aux->proximo;
                    novo->proximo = aux->proximo; //isso aqui é pq como a prioridade ta na frente da outra fila precisa linkar as 2
                    aux->proximo = novo;
                }
            } else {
                aux = *fila;
                while (aux->proximo)
                    aux = aux->proximo;
                aux->proximo = novo;
            }
        }
    } else
        printf("\nErro ao alocar memoria\n");
}

No* remover_da_fila(No **fila){
    No *remover = NULL;

    if(*fila){
        remover = *fila;
        *fila = remover->proximo;
    }
    else
        printf("\tFila vazia\n");
    return remover;
}

void imprimir(No *fila){
    printf("\t------- FILA --------\n\t");
    while(fila){
        printf("%d ", fila->valor);
        fila = fila->proximo;
    }
    printf("\n\t------- FIM FILA --------\n");
}

int main(){
    No *r, *fila = NULL;
    int opcao, valor;

    do{
        printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir_na_fila(&fila, valor);
                break;
            case 2:
                r = remover_da_fila(&fila);
                if(r){
                    printf("Removido: %d\n", r->valor);
                    free(r);
                }
                break;
            case 3:
                imprimir(fila);
                break;
            default:
                if(opcao != 0)
                    printf("\nOpcao invaluda!\n");
        }

    }while(opcao != 0);

    return 0;
}