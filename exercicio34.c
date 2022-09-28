//
// Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
//Restrições:
//→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
//→ O \n para saltar linha pode ser utilizado no máximo 1 vez.
//********************
//********************
//********************
//********************
//********************
//********************
//********************
//********************
//********************
//********************
//

# include <stdio.h>

int main(){

   for (int cont = 0; cont < 10; cont++){
       if (cont == 0)
           printf("********************");
       else
           printf("\n********************");
   }
    return 0;
}