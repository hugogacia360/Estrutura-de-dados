#include <stdio.h>

//typedef float real;

typedef struct ponto {
//    real x, y;
    float x, y;
} ponto;

void exibir_pto(ponto p) {
    printf("(%.2f, %.2f)", p.x, p.y);
}

void exibir1_pto(ponto *p) {
    printf("(%.2f, %.2f)", p->x, p->y);
}

void mover_pto(ponto *p, float dx, float dy) {
    p->x += dx; // (*p).x += dx;
    p->y += dy; // (*p).y += dy;
}

int main() {
    struct ponto p1, p2 = {6.5, -9.8};
    ponto p3 = {0, 0};
    p1.x = 1.2;
    p1.y = -3.7;

    /*printf("Ponto p1: (%.2f, %.2f)\n", p1.x, p1.y);
    printf("Ponto p2: (%.2f, %.2f)\n", p2.x, p2.y);
    printf("Ponto p3: (%.2f, %.2f)\n", p3.x, p3.y);*/
    exibir_pto(p1); printf("\n");
    exibir_pto(p2); printf("\n");
    exibir1_pto(&p3); printf("\n");

    ponto pts[10];
    for(int i = 0; i < 10; i++) {
        pts[i].x = i;
        pts[i].y = i;
    }

    for(int i = 0; i < 10; i++) {
        exibir_pto(pts[i]);
        printf("\n");
    }

    exibir_pto(p1);
    printf("\n");
    //mover_pto(p1, 1, 1);
    mover_pto(&p1, -1, -1);
    exibir_pto(p1);
    printf("\n");

    return 0;
}