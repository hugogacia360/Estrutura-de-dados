/*Leia um número natural n e calcule o produto dos números naturais ímpares, menores ou
iguais a n. Considere o número 1 como primeiro número natural. Apresente o produto
para o usuário */

#include<stdio.h>

int main(){
    int n = 0;
    long long produto = 1;
    
    printf("Digite um numero natural\n");
    scanf("%d", &n);
    for(int i =1; i <=n; i++){
        if ( i % 2 == 1){
            produto = produto * i;
        }
    }

    printf("O produto dos numeros impares sao %lli", produto);

    return 0;
}