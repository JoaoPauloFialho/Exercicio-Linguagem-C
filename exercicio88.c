//
// Crie uma arvore interativa e armazene inteiros
//

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int num;
    struct no *direita, *esquerda;
}No;

void insere(No **raiz, int num){
    No *aux =  *raiz;
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

void insere_recursao(No **raiz, int num){
    No *aux = *raiz;
    if((*raiz) == NULL){
        aux = malloc(sizeof(No));
        aux->num = num;
        aux->esquerda = NULL;
        aux->direita = NULL;
        *raiz = aux;
    } else{
        if(num > aux->num)
            insere_recursao(&aux->direita, num);
        else
            insere_recursao(&aux->esquerda, num);
    }
}

void imprime_arvore(No *raiz){
    if(raiz) {
        printf("%d ", raiz->num);
        imprime_arvore(raiz->esquerda);
        imprime_arvore(raiz->direita);
    }
}
void imprime_arvore_crescente(No *raiz){
    if(raiz) {
        imprime_arvore_crescente(raiz->esquerda);
        printf("%d ", raiz->num);
        imprime_arvore_crescente(raiz->direita);
    }
}

No* busca_arvore(No *raiz, int param){
    while(raiz){
        if(raiz->num == param)
            return raiz;
        else{
            if(param > raiz->num)
                raiz = raiz->direita;
            else
                raiz = raiz->esquerda;
        }
    }
    return NULL;
}

int main(){
    No *raiz = NULL;
    No *busca = NULL;
    int num, escolha=1;
    printf("ARVORE INTERATIVA\n");
    do {
        printf("\n\t[1] INSERIR\n\t[2] IMPRIMIR\n\t[3] IMPRIMIR CRESCENTE\n\t[4] BUSCA\n\t[0] ENCERRAR");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("\nDIGITE UM NUMERO ->");
                scanf("%d", &num);
                insere(&raiz, num);
                break;
            case 2:
                printf("\n\tARVORE\n");
                imprime_arvore(raiz);
                printf("\n");
                break;
            case 3:
                printf("\n\tARVORE CRESCENTE\n");
                imprime_arvore_crescente(raiz);
                printf("\n");
                break;
            case 4:
                printf("\n\tDIGITE O TERMO DE BUSCA");
                scanf("%d", &num);
                busca = busca_arvore(raiz, num);
                if(busca){
                    printf("Termo %d encontrado", busca->num);
                } else
                    printf("Termo nao encontrado na arvore");
            case 0:
                break;
            default:
                printf("Digite um dado valido");
        }
    } while(escolha);

    return 0;
}