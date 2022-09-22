/* 4. Utilizando a estrutura “aluno”, do exercício 1, desenvolva um código que crie um vetor de
estruturas e receba os dados de 10 alunos, ao final, imprima todas as informações na tela.
Utilize o typedef e crie o nome “dados_aluno” para a estrutura. */

#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[50];
    char cpf[50];
    char endereco[50];
    int idade;
}aluno;

int main(){
    aluno a1[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o nome do aluno\n");
        fgets(a1[i].nome, 50, stdin);
        printf("Digite o cpf do aluno\n");
        fgets(a1[i].cpf, 50, stdin);
        printf("Digite o endereco do aluno\n");
        fgets(a1[i].endereco, 50, stdin);
        printf("Digite a idade do aluno\n");
        scanf("%d", &a1[i].idade);
        fflush(stdin);
        system("cls");

        printf("Nome: %s", a1[i].nome);
        printf("Cpf: %s", a1[i].cpf);
        printf("Endereco: %s", a1[i].endereco);
        printf("Idade: %d\n", a1[i].idade);
    }
    return 0;
}