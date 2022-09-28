//
//Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
//um menu ao usuário da seguinte forma:
//1 – Somar
//2 – Subtrair
//3 – Multiplicar
//4 – Dividir
//0 – Sair
//
//Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
//escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
//Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
//programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
//

# include <stdio.h>

int main(){

    int escolha, a, b;

    do {
        printf("\nEscolha uma operacao\n[1] Soma\n[2] Subtracao\n[3] Multiplicar\n[4] Divisao\n[0] Sair");
        scanf("%d", &escolha);
        printf("\nDigite 2 numeros inteiros -> ");
        scanf("%d%d", &a, &b);

        switch (escolha) {
            case 1:
                printf("\n%d + %d = %d", a, b, a+b);
                break;
            case 2:
                printf("\n%d - %d = %d", a, b, a-b);
                break;
            case 3:
                printf("\n%d x %d = %d", a, b, a*b);
                break;
            case 4:
                printf("\n%d / %d = %d", a, b, a/b);
                break;
        }
    } while (escolha != 0);

    return 0;
}
