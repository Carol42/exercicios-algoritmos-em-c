#include <stdio.h>

main(){
    float preco_custo, percentual_acrescimo;
    printf("Qual e o preco de custo do produto? ");
    scanf("%f", &preco_custo);
    printf("Qual o percentual de acrescimo? ");
    scanf("%f", &percentual_acrescimo);

    printf("O valor de venda desse produto e R$ %5.2f", preco_custo+preco_custo*percentual_acrescimo);

}
