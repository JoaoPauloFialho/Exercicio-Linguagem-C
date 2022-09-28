//
//Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
//vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
//mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
//

# include <stdio.h>

int main(){

    float temp[12], maior, menor;
    int mes_maior, mes_menor;

    for(int i = 0; i<12; i++){
        printf("\nDigite a temperatura do mes %d -> ", i+1);
        scanf("%f", &temp[i]);
        if (i == 0) {
            maior = temp[i];
            menor = temp[i];
            mes_maior = i+1;
            mes_menor = i+1;
        }
        else {
            if (temp[i] > maior) {
                maior = temp[i];
                mes_maior = i+1;
            }
            if (temp[i] < menor){
                menor = temp[i];
                mes_menor = i+1;
            }
        }
    }
    printf("\nA maior temperatura foi %.2f e ocorreu no mes %d", maior, mes_maior);
    printf("\nA menor temperatura foi %.2f e ocorreu no mes %d", menor, mes_menor);
    return 0;
}