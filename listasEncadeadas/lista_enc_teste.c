#include <stdio.h>
#include "lista_enc.h"

// Cenário de execução (principal)

void apresentacao(lista *l) {
    if(l == NULL)
        return;

    printf("Tamanho: %d\n", tamanho(l));
    if(vazia(l))
        printf("Lista vazia\n");
    printf("lista: ");
    exibir(l);
    if(tamanho(l) > 0) printf("\n");
}

int main() { 
    printf("Programa teste\n");
    lista *l1 = criar(11);
    if(l1 != NULL) {
        apresentacao(l1);

        for(int i = 1; i <= 3; i++)
            if(inserir_fim(l1, i*2))
                printf("Valor %d inserido com sucesso\n", i*2);
            else
                printf("Falha na operacao de insercao\n");
        apresentacao(l1);
        
        for(int i = 1; i <= 6; i+=2)
            if(inserir_inicio(l1, i))
                printf("Valor %d inserido com sucesso\n", i);
            else
                printf("Falha na operacao de insercao\n");
        apresentacao(l1);

        if(inserir_fim(l1, 100))
                printf("Valor %d inserido com sucesso\n", 100);
            else
                printf("Falha na insercao do valor %d\n", 100);
        apresentacao(l1);

        for(int i = 1; i <= 3; i++)
            if(inserir_meio(l1, -i, 3))
                printf("Valor %d inserido com sucesso\n", -i);
            else
                printf("Falha na insercao do valor %d\n", -i);
        apresentacao(l1);
        int remov;
        if(remover_meio(l1, 3, &remov))
            printf("Valor %d removido com sucesso\n", remov);
        else
            printf("Falha na remocao\n");
        apresentacao(l1);

        int removido;
        if(remover_inicio(l1))
            printf("Valor removido com sucesso\n");
        else
            printf("Falha na remocao\n");
        apresentacao(l1);

        if(remover_fim(l1))
            printf("Valor removido com sucesso\n");
        else
            printf("Falha na remocao\n");
        apresentacao(l1);

        int valores[] = {-1, 6, 5},
            tam = sizeof(valores)/sizeof(int);
        for(int i = 0; i < tam; i++)
            if(busca_seq(l1, valores[i]))
                printf("Valor %d encontrado\n", valores[i]);
            else
                printf("Valor %d NAO encontrado\n", valores[i]);

    }
    printf("%p\n", l1);
    liberar(&l1);
    printf("%p\n", l1);

    lista *l2 = criar(50);
    if(l2 != NULL) {
        apresentacao(l2);
    }
    liberar(&l2);    
    
    lista *l3 = criar(15);
    if(l3 != NULL) {
        apresentacao(l3);
    }
    liberar(&l3);

    return 0;
}