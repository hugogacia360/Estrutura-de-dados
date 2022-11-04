#include <stdio.h>
#include <stdlib.h>

#include "lista_enc.h"

#define VERDADEIRO 1
#define FALSO 0

typedef struct cel celula;   // célula

struct cel {
    int conteudo;
    celula *prox;
};

struct lista {
    celula *prim;
    int qtde;
};

int busca_seq(lista *l, int valor) {
    for (int i = 1; i<=l; i++){

    }
    return FALSO;
}

lista* criar() {
    lista *l = (lista*) calloc(1, sizeof(lista));
    /*if(l != NULL) {
        l->prim = NULL;
        l->qtde = 0;
    }*/

    return l;
}

static celula* criar_celula(int valor) {
    celula *nova = (celula*) malloc(sizeof(celula));
    if(nova == NULL)
        return NULL;

    nova->conteudo = valor;
    nova->prox = NULL;

    return nova;
}

void exibir(lista* L) {
    if(L == NULL || vazia(L))
        return;
    
    celula *temp = L->prim;
    while(temp != NULL) {
        printf("%d ", temp->conteudo);
        temp = temp->prox;
    }
}

int inserir_fim(lista* L, int ctd) {
    if(L == NULL)
        return FALSO;
    
    celula *cel = criar_celula(ctd);
    if(vazia(L))
        L->prim = cel;
    else {
        celula *temp = L->prim;
        while(temp->prox != NULL)
            temp = temp->prox;
        temp->prox = cel;
    }
    L->qtde++;
    
    return VERDADEIRO;
}

int inserir_meio(lista* L, int ctd, int k) {
    celula *cel = criar_celula(ctd);
    if(L == NULL || cel == NULL || (k < 1 || k > tamanho(L)+1))
        return FALSO;

    if(k == 1)
        inserir_inicio(L, ctd);
    else {
        celula *temp = L->prim;
        for(int i = 1; i <= k-2; i++)
            temp = temp->prox;
        cel->prox = temp->prox;
        temp->prox = cel;
        L->qtde++;
    }

    return VERDADEIRO;
}

int inserir_inicio(lista* L, int ctd) {
    if(L == NULL)
        return FALSO;
    
    celula *cel = criar_celula(ctd);
    if(cel == NULL)
        return FALSO;

    cel->prox = L->prim;
    L->prim = cel;
    L->qtde++;

    return VERDADEIRO;
}

void liberar(lista **l) {
    // STUB DE FUNÇÃO
}

int remover_fim(lista* L) {
    return FALSO; // STUB DE FUNÇÃO
}

int remover_meio(lista* L, int k, int *rem) {
    if(vazia(L) || k < 1 || k > tamanho(L))
        return FALSO;

    celula *temp = L->prim;
    if(L->qtde == 1) {
        free(L->prim);
        L->prim = NULL;
    } else {
        for(int i = 1; i <= k-2; i++)
            temp = temp->prox;
        celula *removida = temp->prox;
        *rem = removida->conteudo;
        temp->prox = temp->prox->prox;
        free(removida);
    }
    L->qtde--;

    return VERDADEIRO;
}

int remover_inicio(lista *l) {
    return FALSO; // STUB DE FUNÇÃO 
}

int tamanho(lista* l) {
    if(l == NULL)
        return 0;

    return l->qtde;
}

int vazia(lista* l) {
    if(l == NULL)
        return VERDADEIRO;
    
    return l->qtde == 0;
}