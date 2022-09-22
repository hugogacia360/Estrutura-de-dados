#include <stdio.h>
#include <stdlib.h>

    typedef struct {
        int peso;
        int altura;
        char nome[20];
    } pessoa;

int main (void){
    
    int *y = (int*) malloc (sizeof(int)); // aloca um espaço de memoria para o ponteiro Y, malloc retorna um ponteiro void, por isso é necessário fazer o cast para int
    *y = 20; // o ponteiro Y recebe o valor 20
    int z = sizeof(int);
    printf ("*y = %d \t z = %d", *y, z);
    return 0;
}