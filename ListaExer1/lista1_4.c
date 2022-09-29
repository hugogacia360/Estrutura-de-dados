#include <stdio.h>

void float_ref(float *real) {
    int inteiro = *real;
    float frac = *real - inteiro;
    printf("%i\n%f\n", inteiro, frac);
    }

int main(){

    float num;
    printf("Digite um numero real: ");
    scanf("%f", num);
    float_ref (&num);

    return 0;
}