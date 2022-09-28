//
//Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
//programa deve imprimir na tela quantos números positivos e negativos foram digitados.
//Exemplo:
//

# include <stdio.h>

int main(){
    int neg_cont, pos_cont, cont, num;

    do{
        printf("Digite um valor: ");
        scanf("%d", &num);
        if (num < 0)
            neg_cont ++;
        else
            pos_cont ++;
    } while (num != 0);
    printf("\nPositivos: %d", pos_cont);
    printf("\nNegativos: %d", neg_cont);

    return 0;
}