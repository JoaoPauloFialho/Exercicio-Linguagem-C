//
//crie um programa que armazene os dados de vários componentes eletrônicos em uma struct
//

#include <stdio.h>

typedef struct{
    char nome[50];
    char modelo[50];
    char energia;
    char descricao[500];
    int quantidade;
    int codigo;
}Eletronico;

Eletronico le_dados(){
    Eletronico e;
    printf("\nDigite o nome do produto ->");
    fgets(e.nome, 50, stdin);
    printf("Digite o modelo do produto ->");
    fgets(e.modelo, 50, stdin);
    printf("Digite a eficiencia de energia ->");
    scanf("%c", &e.energia);
    getc(stdin);
    printf("Digite a descricao do produto ->");
    fgets(e.descricao, 500, stdin);
    printf("Digite a quantidade que o produto tem em estoque ->");
    scanf("%d", &e.quantidade);
    printf("Digite o código do produto ->");
    scanf("%d", &e.codigo);
    getc(stdin);
    return e;
}

void imprime_struct(Eletronico e){
    printf("\n");
    printf("\tNome -> %s", e.nome);
    printf("\tModelo -> %s", e.modelo);
    printf("\tEficiencia -> %c\n", e.energia);
    printf("\tQuantidade em estoque -> %d\n", e.quantidade);
    printf("\tCodigo do produto -> %d\n", e.codigo);
    printf("\tDescricao: %s", e.descricao);
}

int main(){
    Eletronico eletronico[10];
    //só armazenei 3 mesmo por preguiça
    for (int i = 0; i < 3; ++i) {
        eletronico[i] = le_dados();
    }
    for (int i = 0; i < 3; ++i) {
        imprime_struct(eletronico[i]);
        printf("\n");
    }

    return 0;
}