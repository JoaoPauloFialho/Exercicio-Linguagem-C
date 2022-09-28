//
//Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
//multiplicação entre os dois números sem utilizar a operação de multiplicação.
//

# include <stdio.h>

int main(){

    int a, b, soma;
    soma = 0;

    printf("Digite dois numeros inteiros -> ");
    scanf("%d%d", &a, &b);

    for (int cont=0; cont<b; cont++){
        soma += a;
    }
    printf("Resultado da multiplicacao -> %d", soma);

    return 0;
}