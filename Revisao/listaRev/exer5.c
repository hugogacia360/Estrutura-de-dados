/* Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome, o esporte,
idade e altura. Receba os dados de 5 atletas e em seguida informe na tela o atleta mais velho e
o atleta mais alto */

#include <stdio.h>

typedef struct atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
}atleta;

void mais_velho(atleta a1[], int n){
    int maior = 0;
    for (int i = 0; i < n; i++){
        if (a1[i].idade > a1[maior].idade){
            maior = i;
        }
    }
    printf("O atleta mais velho e %s", a1[maior].nome);
}

int main(){

    atleta a1[5];

    for (int i = 0; i < 5; i++){
        printf("Digite o nome do atleta\n");
        fgets(a1[i].nome, 50, stdin);
        printf("Digite o esporte do atleta\n");
        fgets(a1[i].esporte, 50, stdin);
        printf("Digite a idade do atleta\n");
        scanf("%d", &a1[i].idade);
        printf("Digite a altura do atleta\n");
        scanf("%f", &a1[i].altura);
        fflush(stdin);
        system("cls");

    }

    mais_velho(a1, 5);


    return 0;
}