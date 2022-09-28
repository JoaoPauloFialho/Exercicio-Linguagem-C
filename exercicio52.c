//
//Leia uma palavra e diga se ela é um palímdromo
//ama
//arara
//asa
//osso
//radar
//reviver
//socos

# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int main(){

    char palavra[70], invertido[70];
    int i = 0, tam = 0, cont = 0, dif = 1;

    printf("Digite uma palavra -> ");
    scanf("%70[^\n]", palavra);
    while (palavra[i] != '\0'){
        if (palavra[i] == '\n')
            palavra[i] = '\0';
        i++;
        tam++;
    }

    printf("\nNormal  Invertido\n");
    for (int i = tam-2; i >= 0 ; i-- ) {
        printf("\n%c    ----     %c", palavra[cont], palavra[i]);
        if (palavra[cont] != palavra[i]){
            dif = 0;
        }
        cont++;
    }

    if (dif==0)
        printf("\nA palavra %s nao eh palindromo", palavra);
    else
        printf("\nA palavra %s digitada eh palindromo", palavra);

    return 0;
}
