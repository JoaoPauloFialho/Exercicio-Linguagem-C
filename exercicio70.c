//
// crie uma agenta que armazene datas de aniversario
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    FILE *agenda = fopen("Agenda.txt", "a+");
    int escolha = 0;
    int ano, mes, dia;
    char nome[40] = {""};
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    if (agenda) {
        printf("\n\tAGENDA PESSOAL\n");
        while (escolha != 3) {
            printf("\t[1] SALVAR NOVO CONTATO\n\t[2] VISUALIZAR CONTATOS\n\t[3] ENCERRAR PROGRAMA");
            scanf("%d", &escolha);
            switch (escolha) {
                case 1:
                    printf("\nDigite o nome do contato ->");
                    fgetc(stdin);
                    fgets(nome, 50, stdin);
                    printf("\nDigite o ano de nascimento ->");
                    scanf("%d", &ano);
                    printf("\nDigite o mes de nascimento ->");
                    scanf("%d", &mes);
                    printf("\nDigite o dia de nascimento ->");
                    scanf("%d", &dia);
                    fprintf(agenda, "%s", nome);
                    fprintf(agenda, "%d\n%d\n%d\n", dia, mes, ano);
                    break;
                case 2:
                    rewind(agenda);
                    while (fscanf(agenda, "%s %d %d %d", &nome, &dia, &mes, &ano) != -1)
                        printf("\n\tNome -> %s\n\tData de aniversario -> %d/%d\n\tIdade -> %d\n", nome, dia, mes, ((tm.tm_year + 1900)-ano));
                    break;
                case 3:
                    break;
                default:
                    printf("Opcao invalida");
            }
        }
    } else {
        printf("ERROR");
    }


    return 0;
}