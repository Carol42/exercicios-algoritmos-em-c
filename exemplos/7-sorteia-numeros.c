/* Sorteia 6 números para MEGASENA (não verifica repetição) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, numeroSorteado;
// coloca a hora atual como semente para geracão de randômicos
    srand(time (NULL));
    for(i=1; i<=6; i++)
    {
// a função rand gera números aleatórios de 0 a 32767 (padrão)
        numeroSorteado = rand() % 60;
        printf("Numero %d: %d\n", i, numeroSorteado) ;
    }
    printf("\n\n\n");
    system ("pause");
    return 0;
}
