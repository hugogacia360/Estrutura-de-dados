#include<stdio.h>

int main (){
    
    int s = 0, j=3;
    printf("Digite o numero de termos\n");
    scanf("%d", &s);

    for( int i = 1; i <= s; i++){
        if ( i % 2 == 1){
            int s_impar = i * -1;
            printf("%d/%d\t", s_impar, j);
            j +=2;
     
        }
        else{
            int s_par = i;
            printf("%d/%d\t", s_par, j);
            j +=2;
        }
    }

    return 0;
}