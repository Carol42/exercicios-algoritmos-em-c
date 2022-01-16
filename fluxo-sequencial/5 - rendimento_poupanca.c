#include <stdio.h>

main(){
    float valor_depositado;

    printf("Qual foi o valor depositado? ");
    scanf("%f", &valor_depositado);

    printf("O valor total com rendimneto apos um mes foi de: %5.2f", valor_depositado*1.007);
}
