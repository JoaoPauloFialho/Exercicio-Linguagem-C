//
//Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
//monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com
//grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
//primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro
//anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.7
//

# include <stdio.h>

int main(){

    long long int acum, num;
    acum = 0;
    num = 1;

    for(int cont=0; cont <64; cont++){
        num *= 2;
        acum += num;
        printf("%lld ", acum);
    }
    printf("%lld", acum);

    return 0;
}