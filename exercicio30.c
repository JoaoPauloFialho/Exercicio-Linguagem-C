//
//Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
//números inteiros entre 1 e 10.
//

# include <stdio.h>

int main(){

    int menor, cont, checagem;
    checagem = 0;

    while (checagem != 1){
        cont++;
        if (cont%1 == 0 && cont%2 == 0 && cont%3 == 0 && cont%4 == 0 && cont%5 == 0 && cont%6 == 0 && cont%7 == 0 &&
        cont%8 == 0 && cont%9 == 0) {
            printf("%d", cont);
            checagem = 1;
        }
    }


    return 0;
}