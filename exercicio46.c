//
//Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
//após a ordenação.
//

# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main(){

    int vetor[100], troca, aux;
    srand(time(NULL));

    for (int i = 0; i<99; ++i){
        vetor[i] = rand()%100;
    }

    printf("Vetor desordenado -> ");
    for (int i = 0; i<99; ++i){
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    do{
        troca = 0;
        for (int i = 0; i < 100; i++) { //antes eu tava criando outro vetor só para ordenar, mas a questao queria que eu
            if(vetor[i] > vetor[i+1]){  //odernasse o vetor da questão sem criar outro, aí eu fiz esse algoritmo aí que
                aux = vetor[i];         //vai comparando o termo atual com o sucessor e caso ele seja maior que o seu
                vetor[i] = vetor[i+1];  //sucessor os índices são trocados. Para garantir que o vetor esteja todo ordenado
                vetor[i+1] = aux;       //aquele for ali precisa ser executado um número de vezes igual ao tamanho do vetor
                troca = 1;              //só que para o algoritmo ser mais eficiente eu coloquei ele em um Do while, se for
            }                           // realizada uma troca ali ele continua rodando o programa, se não tiver sido realizado
        }                               // alguma troca o programa para de rodar
    } while (troca);


    printf("\nVetor ordenado -> ");
    for (int i = 0; i < 99; i++)
        printf("%3d", vetor[i]);


    return 0;
}