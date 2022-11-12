#include <stdio.h>
#include <stdlib.h>

void somaprod(int a, int b, int *soma, int *produto) /* a funcao recebe 2 numeros pra serem somados e tambem 2 endereços de memoria */
{
    *soma = a + b; //salva a soma no endereço de memoria apontado por soma 
    *produto = a * b; //salva o produto no endereço de memoria apontado por produto
}

int main(void)
{
    int a, b, soma, produto;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &a, &b);
    somaprod(a, b, &soma, &produto); //vai para o endereco de memoria de soma e produto
    printf("\nO valor da soma e %d e o valor do produto e %d\n", soma, produto);

    return 0;
}