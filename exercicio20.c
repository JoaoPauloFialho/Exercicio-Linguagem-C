//
// Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
//

# include <stdio.h>

int main(){
    int soma, i;
    soma = 0;
    for (i=1; i <=10; i+=2){
        soma += i;
    }

    printf("Soma dos impares -> %d", soma);

    return 0;
}