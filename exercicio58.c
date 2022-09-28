//
//Crie uma função recursive que calcule a soma de todos os valores de um vetor
// [ 1, 2, 3, 4, 5, 6, 7, 8, 9]
//   0  1  2  3  4  5  6  7  8

# include <stdio.h>

int soma_vetor(int vetor[], int tam){
    if (tam == 0){
        return 0;
    }
    else{
        return vetor[tam-1] + soma_vetor(vetor, tam-1);
    }
}

int main(){
    int vetor[10] = {1, 1, 1, 5, 1, 1, 1, 1, 1, 1};

    printf("Soma -> %d", soma_vetor(vetor, 3));

    return 0;
}