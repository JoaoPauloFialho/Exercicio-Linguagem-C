//
// Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no
//calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês
//Inválido’.
//

# include <stdio.h>

int main(){

    int escolha;
    printf("Digite um numero -> ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        default:
            printf("Dezembro");
    }

    return 0;
}