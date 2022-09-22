#include <stdio.h>
#include <stdlib.h>
#include<string.h>

    typedef struct {
         int peso;
         int altura;
         char nome[20];
    } pessoa;

int main (void){

   pessoa* p1 = (pessoa*) malloc (sizeof(pessoa)); //aloca memoria para o ponteiro p1 do tamanho de uma struct pessoa
   p1->peso = 70;
   p1->altura = 180;
   strcpy(p1->nome , "Egzona");

    printf ("\n Peso : %d \nAltura = %d \nNome = %s", p1->peso, p1->altura, p1->nome);

    return 0;
}