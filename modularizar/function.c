#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "function.h"


struct Circle
{
    float radius;
    float x, y;

};

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
