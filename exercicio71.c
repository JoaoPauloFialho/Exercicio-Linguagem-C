//
//Crie uma pilha para armazenar contatos
//

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[50];
    Data d;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

Pessoa ler_pessoa(){
    Pessoa p;
    printf("\nDigite o nome ->");
    scanf("%49[^\n]", p.nome);
    printf("\nDigite a data de nascimento dd mm aaaa -> ");
    scanf("%d%d%d",&p.d.dia, &p.d.mes, &p.d.ano);
    getc(stdin);
    return p;
}

void imprimir_pessoa(Pessoa p){
    printf("Nome -> %s", p.nome);
    printf("Data de Nascimento -> %2d/%2d/%4d", p.d.dia, p.d.mes, p.d.ano);
}

void imprimir_pilha(No *topo){
    if(topo){
        printf("\n--------PILHA--------\n");
        while(topo){
            imprimir_pessoa(topo->p);
            topo = topo->proximo;
        }
        printf("\n--------PILHA--------\n");
    }
}

No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->p = ler_pessoa();
        printf("\n");
        novo->proximo = topo;
        return novo;
    }else
        printf("\nErro ao alocar memória\n");
    return NULL;
}

No* desempilhar(No **topo){
    if(topo){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }else
        printf("\nNao tem itens na pilha\n");
    return NULL;
};

int main(){
    No *remover, *topo = NULL;
    int escolha = 0;

    do {
        printf("\nPilha\n[1] empilhar\n[2] desempilhar\n[3] imprimir\n[4] encerrar\n");
        scanf("%d", &escolha);
        getc(stdin);
        switch (escolha) {
            case 1:
                topo = empilhar(topo);
                break;
            case 2:
                remover = desempilhar(&topo);
                break;
            case 3:
                imprimir_pilha(topo);
                break;
            default:
                printf("Digite uma opcao valida");
        }
    } while (escolha!=4);


    return 0;
}