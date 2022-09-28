//escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas variáveis inteiras, menor e maior
//salve nessas duas variáveis o menor e o maior valor do vetor

# include <stdio.h>

void maior_menor_vetor(int vetor[], int tam, int *maior, int *menor){
    for (int i = 0; i < tam; ++i) {
        if (i==0){
            *maior = *(vetor + i);
            *menor = *(vetor + i);
        } else{
          if (*(vetor + i) >= *maior)
              *maior = *(vetor + i);
          if (*(vetor + i) <= *menor)
              *menor = *(vetor + i);
        }
    }
}

int main(){

    int maior = 0, menor = 0, vetor[10] = {1 ,2, 3, 4, 5, 6, 7, 8, 9 ,10};
    maior_menor_vetor(vetor, 10, &maior, &menor);
    printf("Menor valor do vetor ->%d\nMaior valor do vetor ->%d", menor, maior);

    return 0;
}