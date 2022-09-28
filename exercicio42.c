//
//Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
//o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
//modificado.
//

# include <stdio.h>

int main(){
    int menor_index, maior_index, maiorcont = 19;
    int vetor[] = {1,2,3,4,5,6,7,8,9,10, 11, 12, 13, 14,
                   15, 16, 17, 18, 19, 20};

    for (int i=0; i<9; i++){
            menor_index = vetor[i];
            maior_index = vetor[maiorcont];
            vetor[i] = maior_index;
            vetor[maiorcont] = menor_index;
            maiorcont --;
        }

    for (int x = 0; x<20; x++){
        printf("%d ", vetor[x]);
    }

    return 0;
}