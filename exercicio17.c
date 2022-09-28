//
//Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
//dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
//equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
//formam um triângulo”.
// a < b + c
// b < a + c
// c < a + b

# include <stdio.h>

int main(){
    float a, b, c;
    printf("Digite o comprimento dos tres segmentos de reta");
    scanf("%f%f%f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b ){
        printf("\nEh possivel formar um triangulo do tipo -> ");

        if (a == b && b == c)
            printf("Equilatero");
        if ((a == b && b != c) || (c == b && b != a) || (c == a && a != b))
            printf("Isosceles");
        if (a != b && a != c && c != b)
            printf("Escaleno");
    }

    return 0;
}
