#include <stdio.h>

main(){
    float numero;
    printf("Digite um numero qualquer: ");
    scanf("%f", &numero);

    if(numero > 100 && numero < 200){
        printf("Este numero esta no intervalo entre 100 e 200!");
    }
    else{
        printf("Este numero nao esta no intervalo entre 100 e 200!");
    }
}
