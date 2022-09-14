#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // seed => semente
    rand(); // => gerar números pseudoaleatórios
    // [0, RAND_MAX]

    printf("%d\n", RAND_MAX);
    int MIN = 0, MAX = 10;
    int valores[11] = {0};
    for(int i = 1; i <= 10000; i++) {
        int valor = MIN + rand()%(MAX - MIN + 1);
        valores[valor]++;
        //printf("%d\n", valor);
    }

    for(int i = 0; i < 11; i++)
        printf("%d: %d\n", i, valores[i]);
    //int valor = 5 + rand()%(10 - 5 + 1)
    
    return 0;
}