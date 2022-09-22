#include <stdio.h>

int main (void){

    int x =25;

    printf("\nThe value of x is : %d", x);

    printf("\nThe adress of x is : %p", &x); //imprime o endereço de memoria de X

    int *pointer = &x;  // o ponteiro recebe o endereço de memoria de X

    printf("\nThe adresss of the pointer is : %p", pointer);  // imprime o endereço do ponteiro

    *pointer = 0; // o ponteiro recebe o valor 0

    printf("\nThe new value of X is : %d", x); // imprime o valor de X")

    int y = 50;

    printf("\n\nThe value of y is : %d", y);

    printf("\nThe adress of y is : %p", &y); // imprime o endereço de memoria de Y

    pointer = &y; // o ponteiro recebe o endereço de memoria de Y

    printf("\nThe new adress of the pointer is : %p", pointer); // imprime o endereço do ponteiro

    *pointer = 1; // o ponteiro recebe o valor 5

    printf("\nThe new value of Y is : %d", y); // imprime o valor de Y")

    return 0;
}