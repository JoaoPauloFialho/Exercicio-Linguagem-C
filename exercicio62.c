//
//crie dua funções fibonacci, uma recursiva e uma iterativa, e calcule o tempo de execução das 2
// n1 n2 n
// n2 n  novo

# include <stdio.h>
# include <time.h>

int fibonacci_it(int num) {
    int a = 0, b = 1, c = 2, cont = 0;
    if (num == 1)
        return a;
    else {
        if (num == 2)
            return b;
        else {
            while (cont < num-2) {
                c = a + b;
                a = b;
                b = c;
                cont++;
            }
        }
    }
    return c;
}

int fibonacci_re(int num) {
    if (num == 1 || num == 0)
        return 0;
    else {
        if (num == 2)
            return 1;
        else
            return fibonacci_re(num - 1) + fibonacci_re(num - 2);
    }
}

int main(){
    int time_ini, time_fin, num;
    printf("Digite o termo de fibonacci -> ");
    scanf("%d", &num);

    printf("Fibonnacci iterativo -> ");
    time_ini = time(NULL);
    printf("%d\n", fibonacci_it(num));
    time_fin = time(NULL);
    printf("TEMPO DE EXECUCAO -> %f", difftime(time_ini, time_fin));

    printf("\nFibonnacci recursivo -> ");
    time_ini = time(NULL);
    printf("%d\n", fibonacci_re(num));
    time_fin = time(NULL);
    printf("TEMPO DE EXECUCAO -> %f", difftime(time_ini, time_fin));

    return 0;
}