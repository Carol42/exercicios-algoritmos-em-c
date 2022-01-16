#include <stdio.h>

main(){
    float valor_compra;
    printf("Qual o valor total da compra? ");
    scanf("%f", &valor_compra);
    printf("O valor de cada prestacao e de: R$%5.2f", valor_compra/5);
}
