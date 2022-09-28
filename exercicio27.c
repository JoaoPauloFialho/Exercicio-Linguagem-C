//
//Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
//massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
//se torne menor que 0,05 gramas.
//

# include <stdio.h>

int main(){
    float massa;
    int tempo;
    tempo = 0;
    printf("Digite a massa -> ");
    scanf("%f", &massa);

    while (massa >= 0.05){
        tempo += 50;
        massa /= 2.0;
    }

    printf("%d minutos", tempo/60);

    return 0;
}