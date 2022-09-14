/* Desenvolva um programa para calcular a soma dos primeiros 50 números naturais ímpares.
Considere o número 1 como primeiro número natural. Apresente a soma para o usuário */

#include<stdio.h>

int main(){
    int soma = 0;
    
    for(int i =1; i <=100; i++){
        if ( i % 2 == 1){
            soma = soma + i;
        }
    }

    printf("A soma dos numeros e %d", soma);

    return 0;
}