//
//Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
//pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
//será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
//escrever mensagem alguma).
//Exemplo de entrada:
//2 2
//3 -2
//-8 -1
//-7 1
//0 2
//Exemplo de saída:
//primeiro
//quarto
//terceiro
//segundo
//

# include <stdio.h>

int main(){

    int x, y;

    do{
        printf("\nDigite as coordenadas X e Y -> ");
        scanf("%d%d", &x, &y);
        if (x == 0 || y == 0)
            break;
        if (x > 0 && y > 0)
            printf("\nPrimeiro");
        if (x < 0 && y > 0)
            printf("\nSegundo");
        if (x < 0 && y < 0)
            printf("\nTerceiro");
        if (x > 0 && y < 0)
            printf("\nQuarto");
    } while (1);

    return 0;
}