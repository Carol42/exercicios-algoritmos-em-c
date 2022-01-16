#include <stdio.h>

main(){
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 > valor2){
        printf("O primeiro valor e maior");
    }
    else if (valor2 > valor1){
        printf("O segundo valor e maior");
    }
    else{
        printf("Os dois valores sao iguais!");
    }

}
