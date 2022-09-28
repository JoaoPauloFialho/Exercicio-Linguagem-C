# include <stdio.h>
# include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char a, b, num;

    printf("Digite um caractere(a) -> ");
    scanf("%c", &a);
    printf("Digite outro caractere(b) -> ");
    scanf(" %c", &b);
    printf("Caractere (a) %c, caractere (b) %c", a, b);

    num = a;
    a = b;
    b = num;

    printf("\n Troquei as variáveis...");
    printf("\n Caractere (a) %c, caractere (b) %c", a, b);

    return 0;
}