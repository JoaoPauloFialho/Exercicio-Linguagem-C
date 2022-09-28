//
// O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
//pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
//e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
//com a tabela abaixo:
//
//IMC Interpretação
//Menor que 18,5 Abaixo do peso
//Entre 18,5 e menor que 25 Peso normal
//Entre 25 e menor que 30 Sobrepeso
//Entre 30 e menor que 35 Obesidade grau 1
//Entre 35 e menor que 40 Obesidade grau 2
//Maior ou igual a 40 Obesidade grau 3
//

#include <stdio.h>

int main(){

    float peso, altura, imc;
    printf("Digite o seu peso e sua altura -> ");
    scanf("%f%f", &peso, &altura);

    imc = peso/(altura*altura);

    if (imc < 18.5)
        printf("Seu IMC eh %.2f, voce estah abaixo do peso", imc);
    if (18.5 < imc && imc < 25)
        printf("Seu IMC eh %.2f, voce estah no peso normal", imc);
    if (25 < imc && imc < 30)
        printf("Seu IMC eh %.2f, voce estah com sobrepeso", imc);
    if (30 < imc && imc < 35)
        printf("Seu IMC eh %.2f, voce estah com obesidade grau 1", imc);
    if (35 < imc && imc < 40)
        printf("Seu IMC eh %.2f, voce estah com obesidade grau 2", imc);
    if (40 <= imc)
        printf("Seu IMC eh %.2f, voce estah com obesidade grau 3", imc);

    return 0;
}