/* 1. Crie uma estrutura que armazena os dados de um aluno: nome completo, cpf, endereço e
idade. Em seguida, crie uma variável deste tipo, leia do teclado as informações e imprima na
tela. */
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[50];
    char cpf[50];
    char endereco[50];
    int idade;
}aluno;

int main (){
    aluno a1;

    printf("Digite o nome do aluno\n");
    fgets(a1.nome, 50, stdin);
    printf("Digite o cpf do aluno\n");
    fgets(a1.cpf, 50, stdin);
    printf("Digite o endereco do aluno\n");
    fgets(a1.endereco, 50, stdin);
    printf("Digite a idade do aluno\n");
    scanf("%d", &a1.idade);
    system("cls");

    printf("Nome: %s", a1.nome);
    printf("Cpf: %s", a1.cpf);
    printf("Endereco: %s", a1.endereco);
    printf("Idade: %d", a1.idade);
    return 0;
}