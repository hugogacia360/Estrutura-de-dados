/* crie um tipo “string” em C, este tipo deve ter tamanho máximo de
1000 posições. Uma constante deve ser criada para definir o tamanho máximo */

#include <stdio.h>

typedef struct string
{
    char str[1000];
} string;

int main()
{
    char string[1000];
    printf("Digite uma string\n");
    fgets(string, 1000, stdin);
    printf("String: %s", string);
    return 0;
}
