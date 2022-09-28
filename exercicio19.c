//
//Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
//de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
//informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
//encerrado. Considere que a senha correta é o valor 123456.
//

# include <stdio.h>

int main(){

    int senha, tentativa;
    senha = 123456;

    printf("Digite a senha -> ");
    scanf("%d", &tentativa);

    while (tentativa != senha){
        printf("Por favor, digite a senha correta");
        scanf("%d", &tentativa);
    }

    printf("Conectado");


    return 0;
}