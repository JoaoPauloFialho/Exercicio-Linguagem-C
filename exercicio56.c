//
//implemente uma funcao recursiva que, dados dois numeros inteiros x e n, calcula e retorne o valor de x elevado a n
// base 2 expoente 4
// 2 4 8 16
# include <stdio.h>

int potencia(int num, int expoente){
    if(expoente == 0)
        return 1;
    else
        return num * potencia(num, expoente-1);
}

int main(){

    int base, expoente;

    printf("Digite a base e o expoente da potencia");
    scanf("%d%d", &base, &expoente);
    printf(potencia(base, expoente));

    return 0;
}