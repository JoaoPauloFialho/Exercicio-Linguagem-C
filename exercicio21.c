//
//Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
//imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
//pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
//

# include <stdio.h>

int main(){
    float a, b;
    printf("Digite a primeira e segunda nota -> ");
    scanf("%f%f", &a, &b);

    while ( a > 10 || a < 0 || b > 10 || b < 0 ){
        printf("Por favor digite notas validas [0 ate 10] -> ");
        scanf("%f%f", &a, &b);
    }

    printf("Media do aluno -> %.2f", (a+b)/2);

    return 0;
}
