//
//Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
//diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
//vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
//vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
//receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
//determine e mostre:
//a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
//o valor total das vendas e o valor da comissão que será paga ao vendedor.
//b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
//empatados).
//

# include <stdio.h>

int main(){

    int qnt_produtos[10], maior, qnt_vendida = 0;
    float valores_produtos[10], total = 0.0;

    for (int c = 0; c < 10; c++){
        printf("\nDigite o valor do produto %d -> ", c);
        scanf("%f", &valores_produtos[c]);
        printf("\nDigite a quantidade de produtos %d vendidos -> ", c);
        scanf("%f", &qnt_produtos[c]);

        qnt_vendida += qnt_produtos[c];
        total += qnt_produtos[c] * qnt_produtos[c];
        if (c == 0)
            maior = qnt_produtos[c];
        else{
            if (qnt_produtos[c] > maior)
                maior = qnt_produtos[c];
        }
    }
    printf("\nQuantidade vendida -> %d", qnt_vendida);

    for (int i = 0; i < 10; i++) {
        printf("\nValor unitario do produto %d -> %.2f", i, valores_produtos[i]);
        printf("\nValor total do produto %d -> %.2f", i, valores_produtos[i]*qnt_produtos[i]);
    }

    printf("\nTotal de vendas -> %.2f", total);
    printf("\nComissao a ser paga ao vendedor -> %.2f", total*0.05);

    printf("\nO(s) produto(s) mais vendido(s) -> ");
    for (int i = 0; i < 10; i++) {
        if (qnt_produtos[i] == maior)
            printf("Produto %d ", i);
    }


    return 0;
}