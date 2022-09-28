//
//Escreva um programa que gere a saída abaixo.
//Restrições:
//→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
//→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
//*
//**
//***
//****
//*****
//******
//*******
//********
//

# include <stdio.h>

int main(){

    for (int cont = 0; cont <= 8; cont ++){
        for (int x = 0; x < cont; x++){
            if (x==0)
                printf("\n*");
            else
                printf("*");
        }
    }

    return 0;
}