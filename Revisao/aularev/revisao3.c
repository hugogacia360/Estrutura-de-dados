#include <stdio.h>

/*
Forma geral de uma função em C

tipo_retorno id_funcao(lista_parametros) {
    corpo da função (instruções em um bloco de comandos)
}

*/

void exibir(int a) {
    printf("%d\n", a);
}

int soma(int a, int b) {
    return a + b;
}

void troca(int v1, int v2) {
    int aux = v1;
    v1 = v2;
    v2 = aux;
}

void troca_correta(int *v1, int *v2) {
    // int *v1 = &a, int *v2 = &b
    int aux = *v1;  // *v1 => *&a => a
    *v1 = *v2;      // *v1 = *v2 => *&a = *&b => a = b
    *v2 = aux;      // *v2 = aux => *&b = aux => b = aux
}

int main() {
    int a = 2, b = 15;
    int *c;
    int* d[] = {&a, &b};
/*    d[0] = &a;
    d[1] = &b;*/
    //c;// = &a;

    printf("a: %d b: %d\n", a, b);
    //troca_correta(&a, &b);
    troca_correta(d[0], d[1]);
    printf("a: %d b: %d\n", a, b);
    return 0;

    printf("conteudo de d[0]: %p\n", d[0]);
    printf("conteudo de d[1]: %p\n", d[1]);

    printf("conteudo de a: %d\n", a);
    printf("Endereco de a: %p\n", &a);
    printf("conteudo de b: %d\n", b);
    printf("Endereco de b: %p\n", &b);
    printf("conteudo de c: %p\n", c);
    printf("Endereco de c: %p\n", &c);

    // & => operador de referenciacção (referência)
    c = &a;

    printf("conteudo de a: %d\n", a);
    printf("Endereco de a: %p\n", &a);
    printf("conteudo de b: %d\n", b);
    printf("Endereco de b: %p\n", &b);
    printf("conteudo de c: %p\n", c);
    printf("Endereco de c: %p\n", &c);

    // operador de DEreferenciação
    //a = 1;
    *c = 1; // *c = 1; *(&a) = 1;   a = 1;

    printf("conteudo de a: %d\n", a);
    printf("Endereco de a: %p\n", &a);
    printf("conteudo de b: %d\n", b);
    printf("Endereco de b: %p\n", &b);
    printf("conteudo de c: %p\n", c);
    printf("Endereco de c: %p\n", &c);

    c = &b;
    *c = 100;

    printf("conteudo de a: %d\n", a);
    printf("Endereco de a: %p\n", &a);
    printf("conteudo de b: %d\n", b);
    printf("Endereco de b: %p\n", &b);
    printf("conteudo de c: %p\n", c);
    printf("Endereco de c: %p\n", &c);

    return 0;

    scanf("%d %d", &a, &b);
    printf("a: %d b: %d\n", a, b);
    exibir(9);
    printf("%d\n", soma(1, soma(1, 2)));

    /*int aux = a;
    a = b;
    b = aux;*/
    troca(a, b);

    printf("a: %d b: %d\n", a, b);

    return 0;
}