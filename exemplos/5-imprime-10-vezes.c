/* Exibe 10 vezes o termo "Linguagem C" usando os três tipos de estruturas de repetição existentes em C. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    printf("Exibe 'linguagem C' 10 vezes");
    printf("\n\nPrimeira forma, com while:");
    i = 0;
    while(i < 10)
    {
        printf("\nLinguagem C");
        i = i + 1;
    }
    printf("\n\nSegunda forma, com for:");
    for (i=0; i < 10; i = i + 1)
    {
        printf("\nLinguagem C");
    }
    printf("\n\nTerceira forma, com do-while:");
    i = 0;
    do
    {
        i = i + 1;
        printf("\nLinguagem C");
    }
    while(i < 10);

    printf("\n\n\n");
    system ("pause");
    return 0;
}

