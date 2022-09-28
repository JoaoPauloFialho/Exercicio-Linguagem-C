//
//Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y,
//passando para a próxima linha a cada X números.
//Exemplo de entrada:
//3 99
//Exemplo de saída:
//1 2 3
//4 5 6
//7 8 9
//10 11 12
//...
//97 98 99
//

# include <stdio.h>

int main(){
    int x, y, acum;
    acum = 0;
    scanf("%d%d", &x, &y);

    do{
        for (int cont = 0; cont<x; cont++) {
            if (cont == 0)
                printf("\n%d", ++acum);
            else
                printf(" %d", ++acum);
            if (acum >= y)
                break;
        }
    } while (acum<y);

    return 0;
}