// recebe 10 notas e exibe aquelas maiores que a média
#include <stdio.h>
#include <stdlib.h>
#define MAX_NOTAS 10
int main()
{
    int i;
    float notas[MAX_NOTAS], soma, media;
    soma = 0;
    printf("Digite as notas: \n");
    for (int i=0; i<MAX_NOTAS; i++)
    {
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma/MAX_NOTAS;
    printf("\nMedia: %.1f", media);
    printf("\nNotas maiores do que a media: ");
    for (int i=0; i<MAX_NOTAS; i++)
        if (notas[i] > media)
            printf("%.1f ", notas[i]);

    printf("\n\n\n");
    system ("pause");
}
