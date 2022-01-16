#include <stdio.h>

main(){
    int a, b, temp;

    printf("Escreva um valor para A: ");
    scanf("%d", &a);
    printf("Escreva um valor para B: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("O valor de A e: %d, e o de B e: %d", a, b);
}
