#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alocação estática de memória (criada automaticamente)
    int a;

    // Alocação dinâmica de memória (criada com auxílio de funções específicas)
    int *b;
    printf("Conteudo da area de memoria alocada dinamicamente: %d\n", *b);

    b = (int*) malloc(sizeof(int));    // retorna o endereço da área de memória alocada
    if(b != NULL)
        return 0;
    
    *b = 5;
    free(b);
    b = NULL;

    //int *c = (int*) malloc(10*sizeof(int)); // malloca(qtde de bytes)
    int *c = (int*) calloc(10, sizeof(int)); //10*sizeof(int));
    if(c != NULL) {
        for(int i = 0; i < 10; i++)
            printf("%d ", c[i]);
        printf("\n");

        printf("Conteudo da area de memoria alocada dinamicamente: %d\n", *b);

        free(c);
        c = NULL;
    }
    
    return 0;
}