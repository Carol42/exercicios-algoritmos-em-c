/* Descubra o maior entre 3 números fornecidos pelo usuário */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n1, n2, n3;
    printf("Entre com o primeiro numero: ");
    scanf("%f", &n1);
    printf("Entre com o segundo numero: ");
    scanf("%f", &n2);
    printf("Entre com o terceiro numero: ");
    scanf("%f", &n3);

    if(n1 > n2 && n1 > n3)
        printf ("\nMaior numero: %f", n1);
    else if (n2 > n3 && n2 > n1)
        printf("\nMaior numero: %f", n2);
    else if(n3 > n1 && n3 > n2)
        printf("\nMaior numero: %f", n3);
    else
        printf("\nExiste mais de um numero maior!");
    printf("\n\n\n");
    system ("pause");
    return 0;
}
