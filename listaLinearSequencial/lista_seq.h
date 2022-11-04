#ifndef LISTA_H // Include guard
#define LISTA_H

// Interface do tipo
typedef struct lst lista;

// Interface das operações

/*
Entrada: lista L, elemento e a ser procurado na lista
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int buscar_seq(lista *L, int e);

/*
Entrada: lista L
Saída: capacidade da lista
*/
int capacidade(lista *L);

/*
Entrada: lista L criada
Saída:  verdadeiro (diferente de 0) se estiver cheia;
        falso (igual a 0) caso contrário
*/
int cheia(lista *L);

/*
Entrada: lista L
Saída: Não tem
*/
void exibir(lista *L);

/*
Entrada: capacidade da lista
Saída: lista com a capacidade definida
*/
lista* criar(int capacidade);

/*
Entrada: lista L, elemento e a ser inserido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int inserir_fim(lista *L, int e);

/*
Entrada: lista L, elemento e a ser inserido
Saída: sucesso ou falha na operação
*/
int inserir_inicio(lista *L, int e);

/*
Entrada: lista L, elemento e a ser inserido, k-ésima posição onde o
elemento e será inserido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int inserir_meio(lista *L, int e, int k);

/*
Entrada: ponteiro para a lista L
Saída: Não tem
*/
void liberar(lista **l);

/*
Entrada: lista L
Saída: sucesso ou falha na operação
*/
int remover_fim(lista *L);

/*
Entrada: lista L
Saída: sucesso ou falha na operação
*/
int remover_inicio(lista *L);

/*
Entrada: lista L, k-ésima posição na qual um elemento será removido
Saída: sucesso (verdadeiro) ou falha (falso) na operação
*/
int remover_meio(lista *L, int k);

/*
Entrada: lista L
Saída: tamanho da lista, ou seja, a quantidade de itens válidos
presentes na lista
*/
int tamanho(lista *L);

/*
Entrada: lista L
Saída: verdadeiro se estiver vazia; falso caso contrário
*/
int vazia(lista *L);

#endif // LISTA_H