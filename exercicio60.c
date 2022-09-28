//
//faça uma função recursiva que inverta o vetor e outra que inverta os valores do vetor ex primeiro com ultimo, segundo
//com penultimo
// 1 2 3 4 5 6 7 8 9 10
// 9 8 7 6 5 4 3 2 1 0

# include <stdio.h>


void troca_valores(int vetor[], int tam, int indice){
    int aux;
    if (indice != tam) {
        aux = vetor[indice];
        vetor[indice] = vetor[tam-1];
        vetor[tam-1] = aux;
        troca_valores(vetor, tam-1, indice+1);
    }
}

void imprime_vetor(int vetor[], int tam){
    if (tam == 1) {
        printf("%d ", vetor[tam-1]);
    }
    else{
        imprime_vetor(vetor, tam-1);
        printf("%d ", vetor[tam-1]);
    }
}

int main(){
    int vetor[10] = {1, 5, 9, 4, 7, 6, 3, 8 ,2, 1};

    imprime_vetor(vetor, 10);
    printf("\n");
    troca_valores(vetor, 10, 0);
    printf("\n");
    imprime_vetor(vetor, 10);
    return 0;
}