#include <stdio.h>

main(){
    float cotacao_dolar, dolares_disponiveis;

    printf("Qual a cotacao do dolar atual? ");
    scanf("%f", &cotacao_dolar);
    printf("Qual a quantidade de dolares que voce pretende converter? ");
    scanf("%f", &dolares_disponiveis);

    printf("O resultado da conversao de dolar para real e: %5.2f", dolares_disponiveis*cotacao_dolar);
}
