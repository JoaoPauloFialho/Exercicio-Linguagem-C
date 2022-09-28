//
//faça um procedimento recursivo para converter um numero decimal em sua forma binaria
// 9/2    4     1
// 4/2    2     0
// 2/2    1     0
// 1001

# include <stdio.h>

void converte_bin(int num, int resto){
    if (num == 1 || num == 0){
        printf("%d", num);
    }
    else{
        resto = num%2;
        num = num/2;
        converte_bin(num, resto);
        printf("%d", resto);
    }
}

void converte_bin_jeito_do_professor(int num){
    if (num == 0)
        printf("%d", num);
    else{
        converte_bin_jeito_do_professor(num/2);
        printf("%d", num%2);
    }
}

int main(){
    int num;

    printf("Digite um numero decimal -> ");
    scanf("%d", &num);

    converte_bin(num, 0);
    printf("\n");
    converte_bin_jeito_do_professor(num);
    return 0;
}
