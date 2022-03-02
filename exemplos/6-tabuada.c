/* Exiba a tabuada de um número fornecido pelo usuário. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, numero;
    printf ("Entre com o numero para a tabuada: ");
    scanf("%d", &numero);
    printf("\n\nVersao com while: ");
    i = 1;
    while(i <= 10)
    {
        printf("\n%d x %d = %d", numero, i, i*numero);
        i = i + 1;
        // pode ser escrito como i++
    }
    printf("\n\nversao com for: ");
    for (i = 1; i <= 10; i++)
        printf("\n%d x %d = %d", numero, i, i*numero);

    printf("\n\n\n");
    system ("pause");
    return 0;
}
