# include <stdio.h>

int main(){

    /*/
     Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
    porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
            Assuma que a conta será dividida igualmente.
    /*/
    float conta, gorjeta, total;
    int qnt_pessoas;

    printf("Digite o valor da conta -> ");
    scanf("%f", &conta);
    printf("\nDigite o valor da gorjeta -> ");
    scanf("%f", &gorjeta);
    printf("\nDigite a quantidade de pessoas -> ");
    scanf("%d", &qnt_pessoas);

    printf("Conta total -> ");
    total = (conta + (conta*(gorjeta/100)))/qnt_pessoas;
    printf("%.2f", total);

    return 0;
}