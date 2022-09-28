//
// implemente uma tabela hash com vetor de lista
//

#include <stdio.h>
#include <stdlib.h>
#define TAM 31

typedef struct no{
    int num;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    int tam;
}Lista;

int funcao_hash(int c){
    return c%TAM;
}

void inicia_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

void insere_lista(Lista *lista, int num) {
    No *novo = malloc(sizeof(No));
    if (novo) {
        novo->num = num;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;
    } else printf("Erro ao alocar memoria\n");
}

void inicia_tabela(Lista tabela[]){
    for (int i = 0; i < TAM; ++i) {
        inicia_lista(&tabela[i]);
    }
}

void insere_tabela(Lista tabela[],int c){
    int id = funcao_hash(c);
    insere_lista(&tabela[id], c);
}

int busca_lista(Lista *lista, int param){
    No *aux = lista->inicio;
    int cont=0;
    while(aux && aux->num != param) {
        aux = aux->proximo;
        cont++;
    }if(aux)
        return cont;
    return 0;
}

int busca_tabela(Lista lista[], int param){
    int id = funcao_hash(param);
    return busca_lista(&lista[id], param);
}

void imprime_lista(Lista lista){
    No *aux = lista.inicio;
    while(aux){
        printf("%d ", aux->num);
        aux = aux->proximo;
    }
}

void imprime_tabela(Lista tabela[]){
    printf("\n");
    for (int i = 0; i < TAM; ++i) {
        printf("%2d = ", i);
        imprime_lista(tabela[i]);
        printf("\n");
    }
}

int main(void){
    Lista tabela[TAM];
    inicia_tabela(tabela);
    int num, busca=1, x;
    for (int i = 0; i < 15; ++i) {
        printf("\nDigite um numero ->");
        scanf("%d", &num);
        insere_tabela(tabela, num);
    }
    do {
        printf("\nDigite o numero que voce deseja buscar ->");
        scanf("%d", &busca);
        x = busca_tabela(tabela, busca);
        if(x)
            printf("Valor encontrado\nindice do vetor -> %d\nposicao na lista-> %d",
                   funcao_hash(busca), x);
        else
            printf("Valor nao encontrado");
        imprime_tabela(tabela);
    } while (busca);

    return 0;
}