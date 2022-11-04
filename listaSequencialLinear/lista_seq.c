#include "lista_seq.h"
#include <stdlib.h>
#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0
#define ERRO -1

// Implementação do tipo
struct lst {
    int *dados,
        cap,
        qtde;
};

// stub de função
int buscar_seq(lista *L, int e) {
    return FALSO;
}

int capacidade(lista *L) {
    if(L == NULL)
        return 0;
    
    return L->cap;
}

int cheia(lista *L) {
    if(L == NULL)
        return FALSO;

    return L->qtde == L->cap;
}
/*
int cheia(lista *L) {
    if(L == NULL)
        return FALSO;

    if(L->qtde == L->cap)
        return VERDADEIRO;
    
    return FALSO;
}
*/

lista* criar(int capacidade) {
    if(capacidade <= 0)
        return NULL;
    
    lista* l = (lista*) malloc(sizeof(lista));
    if(l == NULL)
        return NULL;
    
    l->dados = (int*) calloc(capacidade, sizeof(int));
    if(l->dados == NULL) {
        free(l);
        return NULL;
    }

    l->qtde = 0;
    l->cap = capacidade;
    
    return l;
}

void exibir(lista *L) {
    if(L == NULL || vazia(L))
        return;
    
    for(int i = 0; i < tamanho(L); i++)
        printf("%d ", L->dados[i]);
}

int inserir_fim(lista *L, int e) {
    if(L == NULL || cheia(L))
        return FALSO;
    
    L->dados[L->qtde] = e;
    L->qtde++;
    
    return VERDADEIRO;
}

int inserir_inicio(lista *L, int e) {
    if(L == NULL || cheia(L))
        return FALSO;

    for(int i = L->qtde; i >= 1; i--)
        L->dados[i] = L->dados[i-1];

    L->dados[0] = e;
    L->qtde++;

    return VERDADEIRO;
}

int inserir_meio(lista *L, int e, int k) {
    if(L == NULL || cheia(L))
        return FALSO;
    
    for(int i = L->qtde; i >= k; i--)
        L->dados[i] = L->dados[i-1];
    
    L->dados[k-1] = e;
    L->qtde++;

    return VERDADEIRO;
}

void liberar(lista **L) {
    if(*L == NULL)
        return;
    
    free((*L)->dados);
    free(*L);
    *L = NULL;
}

int remover_fim(lista *L) {
    if(L == NULL || vazia(L))
        return FALSO;

    L->qtde--;
    
    return VERDADEIRO;
}

int remover_inicio(lista *L) {
    if(L == NULL || vazia(L))
        return FALSO;

    for(int i = 1; i <= tamanho(L)-1; i++)
        L->dados[i-1] = L->dados[i];
    L->qtde--;

    return VERDADEIRO;
}

int remover_meio(lista *L, int k) {
    if(L == NULL || vazia(L))
        return FALSO;

    for(int i = k-1; i <= tamanho(L)-1; i++)
        L->dados[i] = L->dados[i+1];
    L->qtde--;

    return VERDADEIRO;
}

int tamanho(lista *L) {
    if(L == NULL)
        return 0;
    
    return L->qtde;
}

int vazia(lista *L) {
    if(L == NULL)
        return ERRO;
    
    return L->qtde == 0;
}


