//
//Descubra o maior valor do vetor com recursao
// 1 2 3 4 5 6 7 8 9 10
// 0 1 2 3 4 5 6 7 8 9

# include <stdio.h>

int maior_valor(int vetor[], int tam, int indice){
    if (tam == 0)
        return vetor[indice];
    else{
        if(vetor[tam-1] > vetor[indice])
            return maior_valor(vetor, tam-1, tam -1);
        else
            return maior_valor(vetor, tam-1, indice); //se aquele if ali for falso significa que o atual indice
    }                                                     //corresponde ao indice do maior termo, se for verdadeiro aquele
}                                                         //if significa que o maior termo é o tam-1 e não o indice atual da função
                                                          //então eu preciso atualizar o indice ali para ele ser tam-1
int main(){
    int vetor[10] = {1, 11, 3, 34, 5, 6, 7, 8, 10, 10};

    printf("Maior valor -> %d", maior_valor(vetor, 10, 0));
    return 0;
}