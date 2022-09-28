//
// Segunda forma de criar uma fila
//

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>

typedef struct no{
    int num;
    struct no *proximo;
}No;

typedef struct{
    No *prim;
    No *fim;
    int tam;
}Fila;

void criar_fila(Fila *fila){
    fila->prim = NULL;
    fila->fim = NULL;
    fila->tam = 0;
}

void inserir_na_fila(Fila *fila, int x){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->num = x;
        novo->proximo = NULL;
        if(fila->prim == NULL){
            fila->prim = novo;
            fila->fim = novo;
        } else{
            fila->fim->proximo = novo;
            fila->fim = novo;
        }
        fila->tam++;
    } else
        printf("Erro ao alocar memoria");
}

No* remover_no_fila(Fila *fila){
    No *remover = NULL;
    if(fila->prim){
        remover = fila->prim;
        fila->prim = remover->proximo;
        fila->tam--;
        return remover;
    } else
        printf("Fila Vazia");
    return NULL;
}

void imprimir_fila(Fila *fila){
    No* aux = fila->prim;
    printf("\n----FILA----\n");
    while(aux){
        printf("%d ", aux->num);
        aux = aux->proximo;
    }
    printf("\n----FILA----\n");

}

int main(){
    Fila fila;
    criar_fila(&fila);
    inserir_na_fila(&fila, 4);
    inserir_na_fila(&fila, 4);
    inserir_na_fila(&fila, 4);
    inserir_na_fila(&fila, 4);
    imprimir_fila(&fila);
    remover_no_fila(&fila);
    imprimir_fila(&fila);
    return 0;
}