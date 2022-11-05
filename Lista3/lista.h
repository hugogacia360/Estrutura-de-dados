#ifndef LISTA_H
#define LISTA_H


typedef struct lst lista;

boolean buscar_seq(lista *L, int e);

boolean capacidade(lista *L);

int cheia(lista *L);

void exibir (lista *L);

lista* criar (int capacidade);

int inserir_fim (lista *L, int e);

int inserir_inicio (lista *L, int e);

int inserir_meio (lista *L, int e, int pos);

int liberar (lista *L);

int remover_fim (lista *L);

int remover_inicio (lista *L);

int tamanho(lista *L);

#endif

