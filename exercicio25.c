//
//Faça um programa que calcule o valor de A, dado por:
//A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
//

# include <stdio.h>

int main(){

    int a, soma, n;
    soma = 0;

    printf("Digite um número inteiro ->");
    scanf("%d", &n);
    printf("\nA -> ");

    for(a=1; a<=n; a++){
        if (a < n)
            printf("%d + ", a);
        else
            printf("%d ");
        soma += a;
    }
    printf(" = %d", soma);

    return 0;
}