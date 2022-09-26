#include<stdio.h>
#include<string.h>

int main(){
    char nome[10][20], busca[20];
    int i, achou = 0;
    for(i = 0; i < 10; i++){
        printf("Digite o nome %d: ", i+1);
        gets(nome[i]);
    }
    printf("Digite o nome a ser buscado: ");
    gets(busca);
    for(i = 0; i < 10; i++){
        if(strcmp(nome[i], busca) == 0){
            achou = 1;
            break;
        }
    }
    if(achou == 1){
        printf("Nome encontrado na posicao %d", i+1);
    }else{
        printf("Nome nao encontrado");
    }
    return 0;
}


