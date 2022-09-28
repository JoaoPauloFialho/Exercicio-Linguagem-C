//
// Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
//de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
//a apresente a média:
//Opções:
//• ‘a’ - Aritmética.
//• ‘p’ - Ponderada (pesos: 3,3,4).
//

# include <stdio.h>

int main(){
    int escolha;
    float media, a, b, c;

    printf("Digite as notas -> ");
    scanf("%f%f%f", &a, &b, &c);
    printf("\nEscolha o tipo de média \n [1] aritmética \n [2] ponderada");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            media = (a+b+c)/3;
            printf("Media -> %.2f", media);
            break;
        case 2:
            media = (a*3 + b*3 + c*4)/(10);
            printf("Media -> %.2f", media);
        default:
            printf("Opçao invalida");
    }

    return 0;
}