# include <stdio.h>

int main() {
    int a, b, c, d, e, contador;
    contador = 0;
    printf("Digite 5 valores inteiros -> ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if(a>0)
        contador ++;
    if(b>0)
        contador ++;
    if(c>0)
        contador ++;
    if(d>0)
        contador ++;
    if(e>0)
        contador ++;


    printf("\nNumeros digitados positivos -> %d", contador);
    printf("\nNumeros digitados negativos -> %d", (5-contador));


    return 0;
}