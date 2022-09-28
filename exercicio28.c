//
//Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
//quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
//média dos salários informados, o salário mais alto e o salário mais baixo.
//

# include <stdio.h>

int main(){

    int qnt, cont;
    float sum, sal, maior, menor;
    maior = 0;
    menor = 0;

    printf("Digite o numero de funcionarios ->");
    scanf("%d", &qnt);

    for(cont=0; cont<qnt; cont++){
        printf("\nDigite o valor do salario ->");
        scanf("%f", &sal);
        if (cont==0)
            menor = sal;
        if (sal < menor)
            menor = sal;
        if (sal > maior)
            maior = sal;
        sum += sal;
    }
    printf("Maior salario -> %.2f\nMenor salario -> %.2f\nMedia dos salarios -> %.2f", maior, menor, (sum/qnt));


    return 0;
}
