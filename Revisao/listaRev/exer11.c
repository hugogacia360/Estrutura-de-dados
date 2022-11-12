#include<stdio.h>

void incre_vetor (int* v, int n);

int main(void)
{
    int v[10] = {1,2,3,4,5,6,7,8,9,10}; //cria um vetor de 10 elementos
    incre_vetor(v, 10); //chama a funcao e passa o endereco do vetor e o numero de elementos

    for(int i = 0; i < 10; i++)
    {
        printf("O vetor incrementado e: %d\n", v[i]);
    }
    
    return 0;
}

void incre_vetor(int *v, int n) //recebe o endereco do vetor e o numero de elementos
{
    for (int i = 0; i < n; i++)
    {
        v[i]++; //incrementa o valor de cada elemento do vetor
    }
}