//
//calcule o enesimo termo da sequencia de fibonacci
// 0 1 1 2 3 5 8 13 21 34 55
// n = (n-1) + (n-1)

#include <stdio.h>
#include <stdlib.h>

int fibonnaci(int num){
    if(num == 1 || num == 0)
        return 0;
    else
        if(num == 2)
            return 1;
        else
            return fibonnaci(num-1) + fibonnaci(num-2);
}

void crescente(int num){

}

int main(){
    int num;

    printf("Digite um numero maior que zero -> ");
    scanf("%d", &num);

    printf(fibonnaci(num));

    return 0;
}