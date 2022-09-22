/*Desenvolver um algoritmo para efetuar o cálculo do valor de S, sendo S = 1−2+3−4+. . .
O número n de termos deverá ser solicitado ao usuário */
#include<stdio.h>

int main (){
    
    int s = 0;
    printf("Digite o numero de termos\n");
    scanf("%d", &s);

    for( int i = 1; i <= s; i++){
        if ( i % 2 == 0){
            int s_par = i * -1;
            printf("%d\n", s_par);
     
        }
        else{
            int s_impar = i;
            printf("%d\n", s_impar);
        }
    }

    return 0;
}