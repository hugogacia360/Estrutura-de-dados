#include <stdio.h>
#include <stdlib.h>

int merge(int *v, int inicio, int meio, int fim);
void mergeSort(int *v, int inicio, int fim);


int main(void)
{

    int v[10] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    mergeSort(v, 0, 9);
    merge(v, 0, 4, 9);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }


    return 0;
}

void mergeSort(int *v, int inicio, int fim) // recebe o vetor, o indice e o fim dele

{

    int meio;
    if (inicio < fim)
    {
        meio = (inicio + fim) / 2;   // divide o vetor em duas partes
        mergeSort(v, inicio, meio);  // chama a função mergeSort para a metade da esquerda
        mergeSort(v, meio + 1, fim); // chama a função mergeSort para a metade da direita
        merge(v, inicio, meio, fim); // chama a função merge para juntar as duas partes
    }
}

int merge(int *v, int inicio, int meio, int fim) // recebe o vetor, o indice e o fim dele
{
    int *temp, p1, p2, tamanho, k;
    int fim1 = 0, fim2 = 0;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *)malloc(tamanho * sizeof(int)); // aloca o vetor temporario

    if (temp != NULL)
    {
        for (int i = 0; i < tamanho; i++)
        {
            if (!fim && !fim2)
            {
                if(v[p1]< v[p2])
                    temp[i] = v[p1++];
                else
                    temp[i] = v[p2++];
                if (p1 > meio)
                    fim1 = 1;
                if (p2 > fim)
                    fim2 = 1;
            }
            else
            {
                if (!fim)
                    temp[i] = v[p1++];
                else
                    temp[i] = v[p2++];
            }
        }

        for (int j = 0, k = inicio; j < tamanho; j++, k++)
        {
            v[k] = temp[j];
        }
        free(temp);
    }
}