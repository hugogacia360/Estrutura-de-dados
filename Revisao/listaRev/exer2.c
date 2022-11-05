/* Implemente um programa que crie uma estrutura para representar as coordenadas de um
ponto no plano (x e y). Depois, declare e leia do teclado dois pontos e exiba a distância entre
eles. Utilize o typedef para criar um novo nome para a estrutura */

#include <stdio.h>

typedef struct plano
{
    int x, y;
} plano;

int main()
{

    plano p1;

    printf("Digite a coordenada x\n");
    scanf("%d", &p1.x);
    printf("Digite a coordenada y\n");
    scanf("%d", &p1.y);

    float distancia = sqrt(pow(p1.x, 2) + pow(p1.y, 2));
    printf("A distancia entre os pontos e %f", distancia);

    return 0;
}