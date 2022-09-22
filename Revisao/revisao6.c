#include <stdio.h>

/* Forma geral (sintaxe) de uma função em C
tipo_retorno id_funcao(lista_parametros) {
    bloco de comandos
}
*/

/*
Escopo de uma variável: local do código-fonte onde se pode
acessar uma variável

Tempo de vida: ocorre durante a execução do programa
*/

void troca(int v1, int v2) {
    int aux = v2;
    v2 = v1;
    v1 = aux;
}

void troca_correta(int *v1, int *v2) {
    int aux = *v2;   // v2 = &b => *v2 = *&b => *v2 = b
    *v2 = *v1;
    *v1 = aux;
}

int soma(int v1, int v2) {
    return v1 + v2;
}

void soma_ref(int v1, int v2, int *soma) {
    *soma = v1 + v2;
}

void produto(int v1, int v2, int *prod) {
    *prod = v1 * v2;
}

int produto_novo(int v1, int v2) {
    return v1 * v2;
}

int main() {
    int a = 5, b = -70;

    printf("a: %d\nb: %d\n", a, b);
    troca(a, b);
    printf("a: %d\nb: %d\n", a, b);

    troca_correta(&a, &b);
/*    int aux = a;
    a = b;
    b = aux;
*/
    printf("a: %d\nb: %d\n", a, b);

    int s = 10;
    soma_ref(a, b, &s);
    printf("soma: %d\n", s);

    produto(a, b, &s);
    printf("produto: %d\n", s);
    printf("produto: %d\n", produto_novo(a, b));

    return 0;
}