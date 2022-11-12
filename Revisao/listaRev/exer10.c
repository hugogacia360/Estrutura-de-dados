/*calculo da media e da varianca de 10 reais */

#include <stdio.h>

float media(int n, float *v); //recebe o numero de elementos e o vetor
float varianca (int n, float *v, float m); //recebe o numero de elementos, o vetor e a media
 
int main(void)
{
    float v[10];
    float med, var;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%f", &v[i]);
    }

    med = media(10, v);
    var = varianca(10, v, med);
    printf("A media e %f e a varianca e %f", med, var);

    return 0;
}
   /* funcao para calculo da media*/
float media(int n, float *v) //recebe o numero de elementos e o endereco do vetor
{
    float soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += v[i];
    }
    return soma / n;
}

/* funcao para calculo da variancia*/
float varianca (int n, float *v, float m) //recebe o numero de elementos, o endereco do vetor e a media
{
    float soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += (v[i] - m) * (v[i] - m);
    }
    return soma / n;
}