//
//Desenvolva uma função recursiva que calcule a soma dos números inteiros de 1 a N
//1 2 3 4 5 6 7

# include <stdio.h>

int somatorio(int n){
    if(n == 0)
        return 0;
    else{
        return n + somatorio(n-1);
    }
}

int main(){

    int n;

    printf("Digite um numero -> ");
    scanf("%d", &n);

    printf("%d",somatorio(n));

    return 0;
}