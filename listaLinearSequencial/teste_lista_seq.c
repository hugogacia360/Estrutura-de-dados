#include "lista_seq.h"
#include <stdlib.h>
#include <stdio.h>

// Cenário de execução (principal)

void apresentacao(lista *l) {
    if(l == NULL)
        return;

    printf("Tamanho: %d\n", tamanho(l));
    printf("Capacidade: %d\n", capacidade(l));
    if(vazia(l))
        printf("Lista vazia\n");
    if(cheia(l))
        printf("Lista cheia\n");
    exibir(l);
    if(tamanho(l) > 0) printf("\n");
}

int main() { 
    printf("Programa teste\n");
    lista *l1 = criar(11);
    if(l1 != NULL) {
        /*printf("Tamanho: %d\n", tamanho(l1));
        printf("Capacidade: %d\n", capacidade(l1));
        if(vazia(l1))
            printf("Lista vazia\n");
        if(cheia(l1))
            printf("Lista cheia\n");*/
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

        if(remover_meio(l1, 3))
            printf("Valor removido com sucesso\n");
        else
            printf("Falha na remocao\n");
        apresentacao(l1);

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