//
//  crie um programa que imprima endereço e conteúdo de cada posição de um vetor
//

# include <stdio.h>

void imprime_endereco_conteudo(int *vet, int tam){
    for (int i = 0; i < tam; ++i) {
        printf("\nEndereco da posicao %d -> %p\tConteudo da posicao %d -> %d",i, vet+i, i, *(vet+i));
    }
}

int main(){

    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    imprime_endereco_conteudo(vetor, 10);
    //o endereço aumenta de 4 em 4 na base hexadecimal pois cada inteiro ocupa 4 bytes de memória
    return 0;
}