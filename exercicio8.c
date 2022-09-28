# include <stdio.h>
# include <stdlib.h>

int main(){
    int a, b,c, menor, maior;

    printf("Digite 3 valores inteiros -> ");
    scanf("%d%d%d", &a, &b, &c);

    maior = a;

    if (maior < b)
        maior = b;
    if (maior < c)
        maior = c;

    menor = a;
    if (menor > b)
        menor = b;
    if (menor > c)
        menor = c;

    printf("\nMenor valor digitado -> %d\nMaior valor digitado -> %d", menor, maior);

    return 0;
}