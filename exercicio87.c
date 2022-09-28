//
// implemente uma tabela hash de structs
//

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char rua[100];
    char bairro[50];
    char cidade[50];
    char estado[2];
}Endereco;

typedef struct{
    char nome[50];
    int cpf;
    Data data;
    Endereco endereco;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    int tam;
}Lista;

Data ler_data(){
    Data d;
    printf("\nDigite o dia ->");
    scanf("%d", &d.dia);
    getc(stdin);
    printf("\nDigite o mes ->");
    getc(stdin);
    scanf("%d", &d.mes);
    getc(stdin);
    printf("\nDigite o ano ->");
    scanf("%d", &d.ano);
    getc(stdin);
    return d;
}

Endereco ler_endereco(){
    Endereco e;
    printf("\nDigite o nome da rua ->");
    scanf("%100[^\n]", e.rua);
    getc(stdin);
    printf("\nDigite o nome do bairro ->");
    scanf("%50[^\n]", e.bairro);
    getc(stdin);
    printf("\nDigite o nome da cidade ->");
    scanf("%50[^\n]", e.cidade);
    getc(stdin);
    printf("\nDigite o nome do seu estado ->");
    scanf("%2[^\n]", e.estado);
    getc(stdin);
    return e;
}

Pessoa ler_pessoa(){
    Pessoa p;
    printf("\nDigite o nome ->");
    scanf("%100[^\n]", p.nome);
    getc(stdin);
    printf("\nDigite o cpf ->");
    scanf("%d", &p.cpf);
    getc(stdin);
    p.data = ler_data();
    p.endereco = ler_endereco();
    return p;
}

void imprimir_pessoa(Pessoa p){
    printf("\nNome -> %s", p.nome);
    printf("\nCpf -> %d", p.cpf);
    printf("\nData de nascimento -> %2d %2d %4d", p.data.dia, p.data.mes, p.data.ano);
    printf("\nEndereco -> %s, %s, %s, %s", p.endereco.rua, p.endereco.bairro, p.endereco.cidade, p.endereco.estado);
}

int funcao_hash(int valor){
    return valor%TAM;
}

void iniciar_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

void iniciar_tabela(Lista vetor[]){
    for (int i = 0; i < TAM; ++i) {
        iniciar_lista(&vetor[i]);
    }
}

void preencher_lista(Lista *lista, Pessoa p){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->p = p;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam++;
    } else printf("Erro ao alocar memoria");
}

void inserir_tabela(Lista vetor[], Pessoa p){
    int id = funcao_hash(p.cpf);
    preencher_lista(&vetor[id], p);
}

void imprimir_lista(Lista *lista){
    No *aux = lista->inicio;
    while(aux){
        imprimir_pessoa(aux->p);
        aux = aux->proximo;
        printf("\n");
    }
}

void imprimir_tabela(Lista vetor[]){
    for (int i = 0; i < TAM; ++i) {
        printf("\n\t%d = ", i);
        imprimir_lista(&vetor[i]);
    }
}

int busca_lista(Lista *lista, int cpf){
    No *aux = lista->inicio;
    while(aux && aux->p.cpf != cpf){
        aux = aux->proximo;
    }
    if(aux) {
        printf("\nCPF DO CLIENTE ->");
        imprimir_pessoa(aux->p);
        printf("\n");
        return 1;
    }
    return 0;
}

int busca_tabela(Lista vetor[], int cpf){
    int id = funcao_hash(cpf);
    return busca_lista(&vetor[id], cpf);
}

int main(){
    int cpf, busca=1;
    Pessoa p;
    Lista vetor[TAM];
    iniciar_tabela(vetor);
    for (int i = 0; i < 2; ++i) {
        p = ler_pessoa();
        inserir_tabela(vetor, p);
    }

    do {
        printf("\nDigite o cpf do cliente ->");
        scanf("%d", &busca);
        imprimir_tabela(vetor);
        if(busca_tabela(vetor, busca))
            printf("\nCliente encontrado");
        else
            printf("\nCliente nao encontrado");
    } while (busca);

    return 0;
}
