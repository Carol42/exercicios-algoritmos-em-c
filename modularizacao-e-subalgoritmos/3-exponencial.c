#include <stdio.h>

float exp(float base, int expoente){
    float resultado=1; int i;
    if(expoente == 0)
        return 1;
    for(i=1;i<=expoente;i++)
        resultado *= base;
    return resultado;
}
main(){
    float x; int n;
    printf("Insira um valor real (x): ");
    scanf("%f", &x);
    printf("Insira um valor inteiro (n): ");
    scanf("%d", &n);
    printf("O resultado de %5.2f, elevado a %d e igual a %5.2f", x,n,exp(x,n));
}


