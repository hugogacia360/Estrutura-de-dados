#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 50

typedef struct {
    int chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX+1]; // vetor de estruturas do tipo REGISTRO
    int nroElem;
} LISTA;

void inicializarLista(LISTA* l) { // Inicializa a lista
    l->nroElem = 0; // Inicializa o número de elementos da lista
}
int tamanho(LISTA* l) { // Retorna o tamanho da lista
    return l->nroElem; // Retorna o número de elementos da lista
}
void exibirLista(LISTA* l) { // Exibe a lista
    printf("Lista: \" ");
    for(int i = 0; i < l->nroElem; i++) // Percorre a lista
        printf("%i ", l->A[i].chave); // Exibe o elemento
    printf("\"\n");
}
int buscaSentinela(LISTA* l, int ch) { // Busca sequencial
    int i = 0; // Inicializa o contador
     l->A[l->nroElem].chave = ch; // Coloca o elemento na última posição
        while(l->A[i].chave != ch) // Enquanto o elemento não for encontrado
            if (i == l->nroElem) return -1; // Retorna -1 se o elemento não for encontrado
            else return i; // Retorna a posição do elemento
}
bool inserirElemLista(LISTA* l, REGISTRO reg, int i) { // Insere um elemento na lista
    if((l->nroElem == MAX) || (i < 0) || (i > l->nroElem)) // Se a lista estiver cheia ou a posição for inválida
        return false; // Retorna falso
    for(int j = l->nroElem; j > i; j--) // Percorre a lista
        l->A[j] = l->A[j-1]; // Desloca os elementos para a direita
    l->A[i] = reg; // Insere o elemento na posição i
    l->nroElem++; // Incrementa o número de elementos da lista
    return true; // Retorna verdadeiro
}
bool excluirElemLista(LISTA* l, int ch) { // Exclui um elemento da lista
    int pos, j;
    pos = buscaSentinela(l, ch); // Busca o elemento na lista
    if(pos == -1) // Se não encontrar o elemento
        return false; // Retorna falso
    for(j = pos; j < l->nroElem-1; j++) // Percorre a lista
        l->A[j] = l->A[j+1]; // Desloca os elementos para a esquerda
    l->nroElem--; // Decrementa o número de elementos da lista
    return true; // Retorna verdadeiro
}

int main(void){
    LISTA l; // declara um objeto do tipo lista

    inicializarLista(&l); // Inicializa a lista passando o endereço da lista
    exibirLista(&l); // Exibe a lista passando o endereço da lista
    inserirElemLista(&l, (REGISTRO){1}, 0); // Insere o elemento 1 na posição 0
    inserirElemLista(&l, (REGISTRO){2}, 1); // Insere o elemento 2 na posição 1
    inserirElemLista(&l, (REGISTRO){3}, 2); // Insere o elemento 3 na posição 2
    inserirElemLista(&l, (REGISTRO){4}, 3); // Insere o elemento 4 na posição 3
    exibirLista(&l); // Exibe a lista passando o endereço da lista



    return 0;
}