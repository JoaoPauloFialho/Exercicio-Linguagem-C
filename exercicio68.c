//
//crie uma função identica a strcpy (char *destino, char *origem)
//


#include <stdio.h>
#include <string.h>

void meu_strcpy(char *destino, char *origem){
    for (int i = 0; i < strlen(origem); ++i) {
        *(destino + i) = *(origem + i);
    }
}

int main(){

    char palavra[10] = {"Eu sou jp"};
    char copia[10] = {" "};

    meu_strcpy(copia, palavra);
    printf("\n%s", palavra);
    printf("\n%s", copia);

    return 0;
}