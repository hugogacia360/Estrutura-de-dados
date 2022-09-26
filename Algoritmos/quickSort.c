#include <stdio.h>

void quicksort(int *v, int inicio, int fim);
int particiona(int *v, int inicio, int fim);

    int main(void)
{

    int v[10] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};

    quicksort(v, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}

int particiona(int *v, int inicio, int fim) // recebe um vetor e o inicio e fim dele como parametros
{
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = v[inicio];
    while (esq < dir)
    {
        while (v[esq] <= pivo)
            esq++; // percore o vetor da esquerda para a direita enquanto o valor for menor que o pivo
        while (v[dir] > pivo)
            dir--;     // percore o vetor da direita para a esquerda enquanto o valor for maior que o pivo
        if (esq < dir) // se o elemento da esquerda for menor que o da direira, troca os elementos de lugar
        {
            aux = v[esq];  //troca os valores apontados por esq e dir
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }
    v[inicio] = v[dir]; // coloca o pivo na posição correta
    v[dir] = pivo;
    return dir;
}

void quicksort(int *v, int inicio, int fim) // recebe como parametro o vetor e o inicio e fim do vetor
{
    int pivo;
    if (fim > inicio)
    {
        pivo = particiona(v, inicio, fim);
        quicksort(v, inicio, pivo - 1); // chama a função quicksort para a metade da esquerda
        quicksort(v, pivo + 1, fim);    // chama novamente a função quicksort para ordenar os valores maiores que o pivo
    }
}