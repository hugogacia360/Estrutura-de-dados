#include <stdio.h>
int main() {
   int i, j, linha, k = 0;
   printf("Entre com o numero de linhas da piramide: ");
   scanf("%d", &linha);
   for (i = 1; i <= linha; ++i, k = 0) { 
      for (j = 1; j <= linha - i; ++j) { //enquanto o numero de colunas for menor ou igual que o numero de linhas menos 1 , imprima espaços
         printf("  ");
      }
      while (k != 2 * i - 1) { /* a quantidade maxima de de asteriscos por linha será igual ao numero de linhas da piramide vezes 2 menos -1
                                    enquanto o maximo nao for atingido imprime asteriscos na linha*/
        printf("* ");
         ++k; //incrementa k
      }
      printf("\n");
   }

   printf("Entre com o numero de linhas linhas da piramide: ");
   scanf("%d", &linha);
   for (i = 1; i <= linha; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }

   return 0;
}