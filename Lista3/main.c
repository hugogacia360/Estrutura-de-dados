#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void mostrarLista(lista L)
{
    if (l == NULL)
    {
        return;

        printf("Tamanho: %d\n", tamanho(l));
        printf("Capacidade: %d\n", capacidade(l));

        if (vazia(l))
        {
            printf("Lista vazia\n");
        }
        if cheia (l)
        {
            printf("Lista cheia\n");
        }
        exibir(l);
        if (tamanho(l) > 0)
        {
            printf("\n");
        }
    }
}

int main (void)
{
    lista l1 = criar(11);
}