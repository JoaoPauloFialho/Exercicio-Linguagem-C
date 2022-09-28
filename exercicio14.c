//
// Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
//

# include <stdio.h>

int main(){
    char a;
    printf("Digite um caractere -> ");
    scanf("%c", &a);

    (a =='a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a =='A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') ?
    printf("Eh vogal") : printf("Eh consoante");
}
