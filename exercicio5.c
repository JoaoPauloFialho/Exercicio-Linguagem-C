#include <stdio.h>

int main(){
    /*/
    Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
     /*/
    float dias, total;

    printf("Digite a quantidade de dias trabalhados -> ");
    scanf("%f", &dias);

    total = (45.00*dias);
    total = total+(total*(0.08));
    printf("Valor -> %.2f ", total);

    return 0;
}