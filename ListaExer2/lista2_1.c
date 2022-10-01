#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

typedef struct Circle
{
    float radius;
    float x, y;

} circle;

void show_circle(circle c);
float area_circle(circle c, float radius);
float perimeter(circle c);
float distance(circle c1, circle c2);

int main(void)
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

void show_circle(circle c)
{

    printf("Centro: (%.2f, %.2f)", c.x, c.y);
    printf("\nRaio: %.2f", c.radius);
}

float area_circle(circle c, float radius)
{
    return pi * radius * radius;
}

float perimeter(circle c)
{
    return 2 * pi * c.radius;
}

float distance(circle c1, circle c2)
{
    return sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
}
