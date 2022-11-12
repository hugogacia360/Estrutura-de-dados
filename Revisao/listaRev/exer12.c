#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *v = malloc(sizeof(int)); //aloca memoria para um vetor de 10 elementos do tipo inteiro
    for (int i = 0; i < 10; i++)
    {
        v[i] = i + 1; //atribui valores ao vetor
        printf("O vetor e: %d\n", v[i]);
    }
    printf("O tamanho do vetor e: %d\n", sizeof(v)); //mostra o tamanho do vetor
    return 0;
}