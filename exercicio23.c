//
// Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
//inclusive N, se for o caso.
//

# include <stdio.h>

int main(){

    int i, n;
    printf("Digite um numero inteiro -> ");
    scanf("%d", &n);

    for (i=0; i<=n; i+=2){
        printf("%d ", i*i);
    }

    return 0;
}