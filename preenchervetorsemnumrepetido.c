# include <stdio.h>
# include <stdlib.h>
# include <time.h>
//o programa abaixo imprime um vetor sem números repetidos

int main(){

    int vetor[30], igual, cont = 0;

    srand(time(NULL));

    do{
        vetor[cont] = rand() % 30;
        igual = 0;
        for (int i = 0; i < cont; ++i) {
            if (vetor[cont] == vetor[i])
                igual = 1;
        }
        if (igual == 0)
            cont++;
    } while (cont<30);

    for (int i = 0; i < 30; ++i) {
        printf("%d ", vetor[i]);
    }

    return 0;
}