//
//Leia uma frase e diga se ela é palindroma
//roma me tem amor
//a grama e amarga
//anotaram a data da maratona


# include <stdio.h>
# include <string.h>

int main(){

    char frase[80] = {""};
    char junto[80] = {""};
    int diferente = 0, i = 0;

    printf("Digite a frase -> ");
    scanf("%80[^\n]", frase);

    for (int j = 0; j < strlen(frase); ++j) {
        if(frase[j] != '?' && frase[j] != '!' && frase[j] != '.' && frase[j] != ' ') {
            junto[i++] = frase[j];
        }
    }
    //junto[i] = '\0';

    i=0;
    printf("\nNormal  -  Invertido\n");
    for (int j = strlen(junto)-1; j >= 0; --j) {
        if(junto[i] != junto[j])
            diferente = 1;
        printf("\n%c   -   %c", junto[i], junto[j]);
        i++;
    }

    if(diferente)
        printf("\nA frase digitada nao eh palimdromo");
    else
        printf("\nA frase digitada eh palindromo");

    return 0;
}


