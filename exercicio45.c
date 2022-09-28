//
//Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
//código inteiro e faça uma das ações abaixo:
//0 – finaliza o programa;
//1 – imprime o vetor na ordem do início ao fim;
//2 – imprime o vetor na ordem inversa (do fim para o início).
//O programa deve funcionar até que o usuário digite 0 para finalizar.
//

# include <stdio.h>

int main(){
    float vetor[10];
    int escolha;

    for (int i = 0; i < 10; ++i) {
        printf("\nDigite o valor do indice %d do vetor -> ", i);
        scanf("%f", &vetor[i]);
    }

    do{
        printf("\nOQUE VOCE DESEJA FAZER?\n[0] FINALIZAR PROGRAMA\n[1] IMPRIMIR VETOR\n[2] IMPRIMIR VETOR INVERTIDO");
        scanf("%d", &escolha);

        switch (escolha) {
            case 0:
                break;
            case 1:
                printf("\nVetor -> ");
                for(int i = 0; i<9; ++i)
                    printf("%.2f ", vetor[i]);
                break;
            case 2:
                printf("\nVetor invertido -> ");
                for(int j = 9; j>=0; --j)
                    printf("%f ", vetor[j]);
                break;
            default:
                printf("OPCAO INVALIDA");
        }
    }while(escolha!=0);

    return 0;
}