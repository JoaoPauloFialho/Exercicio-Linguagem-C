# include <stdio.h>

int main(){
    /*/
    Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.
     /*/
    float real, dolar;

    printf("CONVERSÃO DE REAL -> DÓLAR\n");
    printf("Digite o valor -> ");
    scanf("%f", &real);

    dolar = real*5.30;

    printf("\nVALOR CONVERTIDO PARA REAL\n >>>>>>>%.2f", dolar);


    return 0;
}