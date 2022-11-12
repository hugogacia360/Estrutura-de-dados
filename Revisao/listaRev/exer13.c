/*Passando arrays e elementos individuais do array para funções */
#include <stdio.h>
#define SIZE 5

/* protótipos */
void modificaVetor(int b[], int tamanho);
void modificaElemento(int e);
/* função main inicia a execução do programa */
int main(void)
{
    int a[SIZE] = {0, 1, 2, 3, 4}; /* inicializa o vetor a */
    printf("Efeito de passar o array inteiro por referencia:\n\nOs valores do array original sao:\n");
    /* imprime na tela vetor original */
    for (int i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
    /* passa o vetor para a funcao modificaVetor por referência */
    modificaVetor(a, SIZE);
    printf("Os valores do vetor modificados sao:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    return 0;
}

void modificaVetor(int b[], int tamanho)
{
    for (int i = 0; i < SIZE; i++)
    {
        b[i] *= 2;
    }
}

void modificaElemento(int e)
{
    printf("Valor do elemento no modificaElemento é %d\n", e *= 2);
}
