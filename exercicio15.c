//
// Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
//isso a estrutura de seleção switch.
//Obs.: Considere fevereiro como tendo 28 dias.
//

# include <stdio.h>

int main(){

    int escolha;
    printf("Escolha um numero de mes -> ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mes tem 31 dias");
            break;
        case 2:
            printf("Fevereiro tem 28 dias");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mes tem 30 dias");
            break;
    }

    return 0;
}
