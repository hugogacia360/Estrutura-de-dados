#include <stdio.h>

int main() {
    printf("ola mundo\n");
    int soma = 0, i;

    for(i = 1; i <= 20; i++)
        soma += i;

    printf("Soma: %d\n", soma);

    return 0;
}

/*
tipo_retorno id_funcao(lista_parametros) {
    instruções
}
*/
