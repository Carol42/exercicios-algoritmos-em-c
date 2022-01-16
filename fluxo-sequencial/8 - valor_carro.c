#include <stdio.h>

main(){
    float custo_fabrica, valor_com_imposto, valor_total;
    printf("Qual e o custo de fabrica desse produto? ");
    scanf("%f", &custo_fabrica);
    valor_com_imposto = custo_fabrica * 1.45;
    valor_total = valor_com_imposto * 1.3;

    printf("O valor de venda desse carro e de: R$%5.2f", valor_total);

}
