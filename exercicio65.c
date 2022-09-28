//
//escreva um procedimento que troca os valores dos parâmetros recebidos
//

# include <stdio.h>

void troca(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){

    float a=9.0, b=87.98;

    printf("A -> %f\n B -> %f", a, b);
    troca(&a, &b);
    printf("\nA -> %f\n B -> %f", a, b);

    return 0;
}