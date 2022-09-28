//
//Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
//centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
//dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
//

# include <stdio.h>

int main(){

    float din, cont;
    din = 1;

    for (cont=0; cont<=30; cont++){
        din *=2;
    }
    printf("%.2f", din/100);

    return 0;
}
