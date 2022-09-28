//
// Created by joaop on 21/08/2022.
//

#include <stdio.h>

int main(){

    char sexo;
    int idade;
    float peso, altura;
    printf("Digite seu sexo [M/F]: ");
    sexo = getc(stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Sexo -> %c \nIdade -> %d \nPeso -> %.2f \nAltura -> %.2f", sexo, idade, peso, altura);

    return 0;
}