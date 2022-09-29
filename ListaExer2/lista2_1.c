#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415

typedef struct Circle
{
    float radius;
    float x, y;

} circle;

int main(void)
{

    return 0;
}

void exibir_circle(circle *c)
{
    if (c != NULL)
    {
        printf(" O centro do circulo e (%.2f, %.2f)", c->x, c->y);
        printf("\nO radio do circulo e %.2f", c->radius)
    }
}
float area_circulo(circle *c)
{
    if (c != NULL)
    {
        return pi * pow(c->radius, 2);
    }
}
float perimeter(circle *c)
{
    return 2 * (pi * c->radius);
}

circle* criar_circulo(float x, float y) {
    circle *c = (circle*) calloc(1, sizeof(struct Circle));
    if(p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}