# include <stdio.h>

int main() {

    /*
     Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
        5, ou se não é divisível por nenhum deles.
     */
    int a;

    printf("Digite um numero -> ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("\n%d eh divisivel por 2", a);
    if (a % 3 == 0)
        printf("\n%d eh divisivel por 3", a);
    if (a % 5 == 0)
        printf("\n%d eh divisivel por 5", a);
    if (a % 5 != 0 && a % 3 != 0 && a % 2 != 0)
        printf("\n%d nao eh divisivel por nenhum numero", a);

    return 0;
}