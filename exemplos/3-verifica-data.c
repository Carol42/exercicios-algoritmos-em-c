/* Verifique a validade de uma data de aniversário (solicite apenas o número do dia e do mês).
Dica: meses com 30 dias: abril, junho, setembro e novembro. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dia, mes;
    printf("Entre com o dia: ");
    scanf("%d", &dia);
    printf("Entre com o mes: ");
    scanf("%d", &mes);
    if(mes<1 || mes>12 || dia<1 || dia>31)
        printf("data invalida!");
    else if (mes==2 && dia>28)
        printf("data invalida!");
    else if ( (mes==4 || mes==6 || mes==9 || mes==11) && dia>30)
        printf("data invalida!");
    else
        printf("data valida");
    printf("\n\n\n");
    system("pause");
    return 0;
}
