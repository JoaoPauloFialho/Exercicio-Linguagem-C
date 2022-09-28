//
//Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
//centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
//para que Zé seja maior que Chico.
//


# include <stdio.h>

int main(){

    float chico, ze;
    int cont;
    chico = 1.50;
    ze = 1.10;
    cont = 0;

    do{
        chico += 0.02;
        printf("\n%.2f chico", chico);
        ze += 0.03;
        printf("\n%.2f ze", ze);
        cont++;
    } while (chico > ze);

    printf("\n%d", cont);


    return 0;
}