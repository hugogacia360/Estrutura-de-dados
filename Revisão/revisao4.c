#include <stdio.h>

    int soma ( int v1, v2){
    return n1 + n2
    }
    void soma alt (int v1, int v2, int *soma){
        *soma = v1 + v2;
    }
    void somaProd ( int v1, int v2, int *soma, int *produto){
        *soma = v1 + v2;
        *produto = v1*v2;
    }

int main (){
    
    int a = 6;
    int b = 7;
    int s, p;

    print("soma : %d\n", soma (a,b));
    soma alt(a,b,&s);
    somaProd (a,b,&s, &p)
    printf("soma : %d\n", &s);
    printf("soma : %d\nProduto : %d")

    return 0;
}