# include <stdio.h>

int main(){
    /*/
    Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12
    /*/

    int horas, minutos, segundos, resto;

    printf("Digite o valor em segundos -> ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    resto = resto % 60;
    segundos = resto/60;

    printf("%d %d %d", horas, minutos, resto);

    return 0;
}