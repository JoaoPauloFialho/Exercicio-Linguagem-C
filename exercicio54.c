//
//crie uma função recursiva para calcular o fatorial de um número n
//

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int fat(long long int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    else{
        return x * fat(x - 1);
    }
}

int main(){
    long long int num;
    printf("Digite um numero -> ");
    scanf("%lld", &num);

    printf("Fatorial do numero -> %lld",fat(num));

    return 0;
}