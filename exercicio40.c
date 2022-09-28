//
//Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
//Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
//fim, imprima os dois vetores.
//

# include <stdio.h>

int main(){

    int vetor[10], quadrado[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o valor do indice %d -> ", i);
        scanf("%d", &vetor[i]);
        quadrado[i] = vetor[i]*vetor[i];
    }


    printf("\nVetor digitado -> ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nQadrado do vetor digitado -> ");
    for (int i = 0; i < 10; i++){
        printf("%d ", quadrado[i]);
    }

    return 0;
}