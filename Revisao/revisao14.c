#include <stdio.h>
#include <stdlib.h>

typedef struct pto {
    float x, y;
} ponto;

ponto* criar_ponto(float x, float y);
void exibir_pto(ponto *p);
void mover_pto(ponto *p, float dx, float dy);

int main() {
    //ponto *p = (ponto*) calloc(1, sizeof(struct pto));
    ponto *p = criar_ponto(5.1, 6.2);

    ponto *p1 = criar_ponto(0, 0);

/*    p->x = 5.1;
    p->y = 6.2;
*/
    exibir_pto(p);
    printf("\n");

    mover_pto(p, -1, -1);

    exibir_pto(p);
    printf("\n");

    return 0;
}

ponto* criar_ponto(float x, float y) {
    ponto *p = (ponto*) calloc(1, sizeof(struct pto));
    if(p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

void exibir_pto(ponto *p) {
    if(p != NULL)
        printf("(%.2f, %.2f)", p->x, p->y);
}

void mover_pto(ponto *p, float dx, float dy) {
    if(p != NULL) {
        p->x += dx;
        p->y += dy;
    }
}