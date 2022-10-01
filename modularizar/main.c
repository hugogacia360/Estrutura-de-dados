#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "function.h"

int main(int argc, char *argv[])
{

    circle circles[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        circles[i].radius = 1 + rand() / (float)RAND_MAX * 4;
        circles[i].x = rand() / (float)RAND_MAX * 10 - 5;
        circles[i].y = rand() / (float)RAND_MAX * 10 - 5;
    }

    for (i = 0; i < 10; i++)
    {
        printf("\n\n----- Circulo %i -----\n\n", i + 1);
        show_circle(circles[i]);
        printf("\nArea: %.2f", area_circle(circles[i], circles[i].radius));
        printf("\nPerimetro: %.2f", perimeter(circles[i]));
        printf("\nDistancia: %.2f", distance(circles[i], circles[i + 1]));

    }

    return 0;
}