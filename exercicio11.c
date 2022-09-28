//
// Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
//de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
//

# include <stdio.h>

int main(){

    int escolha;
    float valor;

    printf("Escolha a moeda para conversão\n [1] Dolar -> Real\n [2] Real -> Dolar");
    scanf("%d", &escolha);
    printf("\nDigite o valor ->");
    scanf("%f", &valor);

    switch (escolha) {
        case 1:
            valor /= 5.30;
            break;
        default:
            valor *= 5.30;
    }

    printf("\nValor convertido -> %.2f", valor);

    return 0;
}