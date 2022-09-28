//
// implemente uma tabela hash de vetor simples
//

#include <stdlib.h>
#include <stdio.h>
#define TAM 31

int funcaohash(int chave){
    return chave%TAM;
}

void inicia_tabela(int *vet){
    for (int i = 0; i < TAM; ++i) {
        *(vet+i) = -1;
    }
}

void insere_tabela(int vet[], int cod){
    int id = funcaohash(cod);
    if( vet[id] == -1)
        vet[id] = cod;
    else{
        while(vet[id] != -1){
            id++;
        }
        vet[id] = cod;
    }
}

int busca_tabela(int vet[], int cod) {
    int id = funcaohash(cod);
    if (vet[id] == cod) {
        printf("\nValor encontrado na posicao -> %d", id);
        return id;
    } else {
        while(vet[id] != -1){
            id++;
        } printf("\nValor encontrado na posicao -> %d", id);

    }
    printf("\nValor nao encontrado");
    return -1;
}

void imprime_tabela(int vet[]){
    for (int i = 0; i < TAM; ++i) {
        printf("%d ->", vet[i]);
    }
}

int main(){
    // TAM = 15 * 2 (primo mais proximo) = 31
    // FC = 15/31 = 0.48 OK
    // FUNÇÃO DE ESPALHAMENTO = chave%tam
    int escolha = 1;
    int vet[TAM];
    int cod=0;
    inicia_tabela(vet);
    for (int i = 0; i < 15; ++i) {
        printf("Digite o codigo ->");
        scanf("%d", &cod);
        insere_tabela(vet, cod);
    }
    printf("\n");
    do {
        printf("\nQual termo deseja buscar? Digite 0 para encerrar->");
        scanf("%d", &escolha);
        busca_tabela(vet, escolha);
        printf("\n");
        imprime_tabela(vet);
    } while (escolha);
    return 0;
}