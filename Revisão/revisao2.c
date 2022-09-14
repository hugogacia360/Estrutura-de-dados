#include <stdio.h>
#include <limits.h>

int main() {
    char v = 'A';
    printf("%c %d\n", 'A'+1, v+1);

    int soma = 0, i;
    long long prod = 1;

    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);

    printf("qtde bytes long long: %ld\n", sizeof(long int));

    // for(inicialização; condição; atualização)
    for(i = 2; i <= 2*20; i+=2) {
        soma += i;
        prod *= i;
        printf("%lld\n", prod);
    }
    printf("Soma: %d\nProduto: %lld\n", soma, prod);

    soma = 0; prod = 1;
    i = 2;
    for(;;) {
        if(i > 6)
            break;
        soma += i;
        prod *= i;
        printf("%lld\n", prod);
        i += 2;
    }
    printf("Soma: %d\nProduto: %lld\n", soma, prod);

    for(i = 1; i <= 6; i++) {
        if(i%2 != 0)
            continue;
        printf("%d\n", i);
    }

    return 0;
}

/*
tipo_retorno id_funcao(lista_parametros) {
    instruções
}
*/
