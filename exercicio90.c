//
// Crie uma arvore binária de busca de pessoas
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char rua[200];
    char bairro[50];
} Endereco;

typedef struct {
    char nome[200];
    int cpf;
    Data d;
    Endereco e;
} Pessoa;


typedef struct no {
    Pessoa p;
    struct no *direita, *esquerda;
} No;

Data ler_data() {
    Data d;
    printf("Digite a data dd/mm/yyyy->");
    scanf("%d%d%d%*c", &d.dia, &d.mes, &d.ano);
    return d;
}

Endereco ler_endereco() {
    Endereco e;
    printf("Digite a rua ->");
    scanf("%199[^\n]", e.rua);
    fgetc(stdin);
    printf("Digite o bairro ->");
    scanf("%49[^\n]", e.bairro);
    return e;
}

Pessoa ler_pessoa(int cpf) {
    Pessoa p;
    printf("Digite o nome ->");
    fgets(p.nome, 199, stdin);
    p.cpf = cpf;
    p.d = ler_data();
    p.e = ler_endereco();
    return p;
}

void imprime_pessoa(Pessoa p) {
    printf("\n\tNome -> %s", p.nome);
    printf("\tCPF -> %d", p.cpf);
    printf("\n\tData de nascimento %2d/%2d/%4d", p.d.dia, p.d.mes, p.d.ano);
    printf("\n\tEndereco -> %s, %s", p.e.rua, p.e.bairro);
}

void inserir_cliente(No **raiz, int cpf) {
    No *aux = *raiz;
    while (aux) {
        if (cpf > aux->p.cpf)
            raiz = &aux->direita;
        else
            raiz = &aux->esquerda;
        aux = *raiz;
    }
    aux = malloc(sizeof(No));
    aux->p = ler_pessoa(cpf);
    aux->esquerda = NULL;
    aux->direita = NULL;
    *raiz = aux;
}

void imprimir_arvore(No *raiz) {
    if (raiz) {
        imprimir_arvore(raiz->esquerda);
        printf("\n");
        imprime_pessoa(raiz->p);
        imprimir_arvore(raiz->direita);
    }
}

No *buscar_arvore(No *raiz, int cpf) {
    while (raiz) {
        if (raiz->p.cpf == cpf) {
            printf("\nElemento encontrado");
            imprime_pessoa(raiz->p);
            return raiz;
        } else {
            if (cpf > raiz->p.cpf)
                raiz = raiz->direita;
            else
                raiz = raiz->esquerda;
        }
    }
    return NULL;
}

No *rem(No *raiz, int cpf) {
    if (raiz == NULL) {
        printf("\nValor nao encontrado\n");
        return NULL;
    } else {
        if (cpf == raiz->p.cpf) {
            if (raiz->esquerda == NULL && raiz->direita == NULL) {
                printf("\nCliente removido\n");
                imprime_pessoa(raiz->p);
                free(raiz);
                return NULL;
            } else {
                if (raiz->direita && raiz->esquerda) {
                    No *aux = raiz->esquerda;
                    Pessoa p;
                    while(raiz->direita){
                        raiz = raiz->direita;
                    }
                    p = raiz->p;
                    raiz->p = aux->p;
                    aux->p = p;
                    raiz->esquerda = rem(raiz->esquerda, cpf);
                    return raiz;
                } else {
                    No *aux;
                    if (raiz->direita)
                        aux = raiz->direita;
                    else
                        aux = raiz->esquerda;
                    printf("\nCliente removido\n");
                    imprime_pessoa(raiz->p);
                    free(raiz);
                    return aux;
                }
            }
        } else {
            if (cpf > raiz->p.cpf)
                raiz->direita = rem(raiz->direita, cpf);
            else
                raiz->esquerda = rem(raiz->esquerda, cpf);
        }
    }
}

int main() {
    No *raiz = NULL;
    int cpf = 0, escolha = 1;
    do {
        printf("\n\n");
        printf("\n\t[1]INSERIR\n\t[2]IMPRIMIR\n\t[3]BUSCAR\n\t[4]REMOVER\n\t[0]ENCERRAR");
        scanf("%d%*c", &escolha);
        switch (escolha) {
            case 1:
                printf("\nDigite o cpf ->");
                scanf("%d%*c", &cpf);
                inserir_cliente(&raiz, cpf);
                break;
            case 2:
                imprimir_arvore(raiz);
                break;
            case 3:
                printf("\nDigite o cpf ->");
                scanf("%d%*c", &cpf);
                buscar_arvore(raiz, cpf);
                break;
            case 4:
                printf("\nDigite o cpf do cliente que deseja remover ->");
                scanf("%d%*c", &cpf);
                rem(raiz, cpf);
                break;
            case 0:
                break;
            default:
                printf("\nDigite um numero valido\n");
        }
    } while (escolha);

    return 0;
}