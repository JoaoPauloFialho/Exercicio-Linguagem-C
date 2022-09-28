//
// Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
//em um terceiro vetor. Imprima os três vetores na tela.
//

# include <stdio.h>

int main(){

    int vetor1[25], vetor2[25], vetor3[25];

    for(int i = 0; i < 25; i++){
        printf("Digite o valor para vetor1[%d] ->", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n");
    for(int i = 0; i < 25; i++){
        printf("\nDigite o valor para vetor2[%d] ->", i);
        scanf("%d", &vetor2[i]);
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    printf("\nVetor1 -> ");
    for (int i = 0; i < 25; ++i) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor2 -> ");
    for (int i = 0; i < 25; ++i) {
        printf("%d ", vetor2[i]);
    }

    printf("\nVetor3 com a soma dos vetores 1 e 2 -> ");
    for (int i = 0; i < 25; ++i) {
        printf("%d ", vetor3[i]);
    }

    return 0;
}
