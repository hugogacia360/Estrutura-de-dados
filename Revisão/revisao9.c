#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void exibir(int v[], int tam) {
void exibir(int *v, int tam) {
    for(int i = 0; i < tam; i++)
        printf("%d ", v[i]);
}

int main() {
    int vet[] = {1,2,3,4,5,6};  // v é um ponteiro constante
    int *a, b;

    a = &b;
    // não podemos fazer isso pois estaríamos mudando
    // o conteúdo de v, que é constante
    // v = &b;  

    exibir(&(vet[0]), sizeof(vet)/sizeof(int)); printf("\n");
    exibir(vet, sizeof(vet)/sizeof(int)); printf("\n");
    exibir(&(vet[2]), sizeof(vet)/sizeof(int)-1); printf("\n");
    printf("\n");

    return 0;
}