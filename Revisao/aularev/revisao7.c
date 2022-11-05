#include <stdio.h>
#include <limits.h>

int main() {
    // srand(time(NULL));
    int v[] = {1,9,8,-1,2,3,4,2,3},
    i;
    long tamanho = sizeof(v)/sizeof(int);
    int a;

    printf("sizeof(v): %ld\n", tamanho);
    printf("sizeof(a): %d\n", (int) sizeof(a));
    printf("sizeof(int): %ld\n", sizeof(int));
    printf("sizeof(char): %ld\n", sizeof(char));
    printf("sizeof(float): %ld\n", sizeof(float));
    printf("sizeof(double): %ld\n", sizeof(double));

    printf("Valor maximo de int: %d\n", INT_MAX);
    printf("Valor maximo de int: %d\n", INT_MIN);

    for(i = 0; i < tamanho; i++)
        printf("%d ", v[i]);
    printf("\n");
    
    return 0;
}