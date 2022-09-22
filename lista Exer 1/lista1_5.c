#include<stdio.h>
#include<stdlib.h>

int qtde_valor (int *vet, int n, int v){
    int i, qtde = 0;
    for (i = 0; i < n; i++){
        if (v[i] == v){
            qtde++;
        }
    }
    return qtde;
}
int main (){

    srand(time(NULL));
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for( int i = 1, i <= n, i++){
        vet [i -1] = -10 + rand() % 100;
    }
    qtde_valor(vetor, n, 15);
    
    return 0;
    
}