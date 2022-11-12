/* Um jogador lança dois dados. Cada dado tem seis faces. Essas faces contêm 1, 2, 3, 4, 5 e 6 pontos. Depois que os dados
param, a soma dos pontos nas duas faces voltadas para cima é calculada. Se a soma for 7 ou 11 na primeira jogada, o
jogador vence. Se a soma for 2, 3 ou 12 na primeira jogada (chamado ‘craps’), o jogador perde (ou seja, a ‘casa’ vence). Se
a soma for 4, 5, 6, 8, 9 ou 10 na primeira jogada, então a soma se torna o ‘ponto’ do jogador. Para vencer, o jogador precisa
continuar lançando os dados até que ‘faça seu ponto’. O jogador perde lançando um 7 antes de fazer o ponto */

#include <stdio.h>
#include <time.h>

enum Status
{
    CONTINUE,
    WON,
    LOST
};
int lancarDados(void);

int main(void)
{
    int soma, meusPontos;
    enum Status jogoStatus;
    srand(time(NULL));
    soma = lancarDados();

    switch (soma)
    {
    case 7: // Ganhou no primeiro lançamento
    case 11:a
        jogoStatus = WON;
        break;
    case 2: // Perdeu no primeiro lançamento
    case 3:
    case 12:
        jogoStatus = LOST;
        break;
    default: // Não ganhou nem perdeu, portanto registra o ponto
        jogoStatus = CONTINUE;
        meusPontos = soma;
        printf("O ponto e %d\n", meusPontos);
        break;
    } // Fim do switch

    while(gameStatus == CONTINUE)
    {
        soma = lancarDados();

        if (soma == meusPontos)
        {
            jogoStatus = WON;
        }
        else
        {
            if (soma == 7)
            {
                jogoStatus = LOST;
            }
        }
    }

    if(jogoStatus == WON)
    {
        printf("O jogador venceu\n");
    }
    else
    {
        printf("O jogador perdeu\n");
    }

    return 0;
}

int lancarDados(void)
{
    int dado1, dado2, soma;
    dado1 = 1 + (rand() % 6); // gerar valor de 1 a 6
    dado2 = 1 + (rand() % 6); // gerar valor de 1 a 6
    soma = dado1 + dado2;
    printf("O jogador lancou %d + %d = %d\n", dado1, dado2, soma);
    return soma;
}