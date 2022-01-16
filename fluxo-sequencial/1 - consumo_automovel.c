#include <stdio.h>

main(){
    float distancia_percorrida, combustivel_gasto;

    printf("Qual a distancia percorrida, em km? ");
    scanf("%f", &distancia_percorrida);
    printf("Qual o total de combustível gasto, em litros?");
    scanf("%f", &combustivel_gasto);

    printf("O consumo medio foi de %5.2f", distancia_percorrida / combustivel_gasto, " km/l.");
}
