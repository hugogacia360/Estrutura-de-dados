/* Programa que simula o lançamento de um dado 20 vezes */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand (time(NULL));  // muda o valor da semente de rand para evitar valores repetidos
    for (int i = 1; i <= 20; i++)
    {
        printf("%d\t", 1 + rand() % 6); /* gera um número aleatório de 1 a 6 e imprime na tela */
        if (i % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}