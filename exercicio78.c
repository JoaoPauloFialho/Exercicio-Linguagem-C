//
// Crie uma lista encadeada e a preencha de maneira iterativa
//

# include <stdio.h>
# include <stdlib.h>

typedef struct no{
   int num;
   struct no *proximo;
}No;

void insere_comeco(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = *lista;
        *lista = novo;
    } else printf("Erro ao alocar memoria");
}

void insere_no_final(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = NULL;
        if((*lista) == NULL){;
            *lista = novo;
        } else {
            aux = *lista;
            while (aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    } else printf("Erro ao alocar memoria");
}

void insere_metade(No **lista, int num, int param){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->num = num;
        novo->proximo = NULL;
        if((*lista) == NULL){;
            *lista = novo;
        } else {
            aux = *lista;
            while (aux->proximo && aux->num == param)
                aux = aux->proximo;
            novo->proximo = aux->proximo;//1 2 5 3 8
            aux->proximo = novo;
        }
    } else printf("Erro ao alocar memoria");
}

void imprimir_lista(No *lista, int tam){
    printf("\nLISTA");
    for (int i = 0; i < tam; ++i) {
        printf("--");
    }
    printf("\n");
    while (lista){
        printf("%d ", lista->num);
        lista = lista->proximo;
    }
    printf("\nLISTA");
    for (int i = 0; i < tam; ++i) {
        printf("--");
    }
    printf("\n");
}

int main(){
    No *lista = NULL;
    int escolha=0, num, tam=0, param=0;
    do {
        printf("\n[1] INSERIR NO COMECO\n[2] INSERIR NO MEIO\n[3] INSERIR NO FINAL\n[4] IMPRIMIR\n[0] SAIR");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                insere_comeco(&lista, num);
                tam++;
                break;
            case 2:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                printf("\nDigite qual numero voce quer que a pos dele seja inserido o numer ->");
                scanf("%d", &param);
                insere_metade(&lista, num, param);
                break;
            case 3:
                printf("\nDigite um numero inteiro ->");
                scanf("%d", &num);
                insere_no_final(&lista, num);
                break;
            case 4:
                imprimir_lista(lista, tam);
                break;
            default:
                printf("Digite dados validos");
        }
    }while (escolha);

    return 0;
}