/*
            Aula 195: Exercício 4

            Código escrito por Wagner Gaspar
            Maior de 2021

            4) Considere a seguinte declaração: int A, *B, **C, ***D. Escreva um programa que leia a variável A e calcule
            e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B
            deve ser usada para calcular o dobro, C o triplo e D o quádruplo.
*/

#include <stdio.h>

int main(){
    int a = 10, *b, **c, ***d;

    b = &a;
    c = &b;
    d = &c;
    printf("Numero -> %d", a);
    printf("\nDobro -> %d", (*b * 2));
    printf("\nTriplo -> %d", (**c * 3));
    printf("\nQuadruplo -> %d", (***d * 4));
    return 0;
}