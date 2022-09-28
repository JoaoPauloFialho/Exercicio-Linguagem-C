//
// Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
//

# include <stdio.h>

int main() {
    int i;

    for (i=0; i <= 9999; i+=7){
        printf("%d ", i);
    }

    return 0;
}