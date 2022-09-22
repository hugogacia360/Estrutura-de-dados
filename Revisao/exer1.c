/* Desenvolva um programa para calcular a soma dos primeiros 100 números naturais. Con-
sidere o número 1 como primeiro número natural. Apresente a soma para o usuário */

#include<stdio.h>

int main(){
    int soma = 0;

    for(int i =1; i <=100; i++){
        soma = soma + i;
    }

    printf("A soma dos numeros e %d", soma);

    return 0;
}