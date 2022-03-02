// Matriz com 10 linhas e 10 colunas preenchida com números aleatórios de 0 a 50.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // declara uma matriz com 10 linhas e 10 colunas, capaz de armazenar 100 valores
    int m[10][10];

    int linha, coluna, i;
    srand(time (NULL));

    // preenche a matriz com 100 valores sorteados (de 0 a 50)
    for(linha = 0; linha < 10; linha++)
        for (coluna = 0; coluna < 10; coluna++)
            m[linha][coluna] = rand() % 51;
    // exibe toda a matriz
    for(linha = 0; linha < 10; linha++)
    {
        for(coluna = 0; coluna < 10; coluna++)
            printf("%2d ", m[linha][coluna]);
        printf("\n");
    }
    // exibe os valores da linha 5
    printf("\n\nValores da linha 5 \n");
    for(coluna = 0; coluna < 10; coluna++)
        printf("%2d ", m[5][coluna]);

    // exibe os valores da coluna 5
    printf("\n\nValores da coluna 5 \n");
    for(linha = 0; linha < 10; linha++)
        printf("%2d ", m[linha][5]);

    // exibe os valores da diagonal principal
    printf("\n\nValores da diagonal principal \n");
    for(i = 0; i < 10; i++)
        printf("%2d ", m[i][i]);
    printf("\n\n");
    system("pause");
}
