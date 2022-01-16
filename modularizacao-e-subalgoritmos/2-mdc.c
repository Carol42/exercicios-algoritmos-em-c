#include <stdio.h>

int x;

main(){
    int n, m;
    printf("Informe o primeiro numero inteiro positivo (n): ");
    scanf("%d", &n);
    printf("Informe o segundo numero inteiro positivo (m): ");
    scanf("%d", &m);
    if (n>m)
        x=n;
    else x=m;
    mdc(n,m);
    printf("O MDC de %d e %d e: %d", n, m, x);
}

int mdc(int n, int m){
    while(n%x != 0 || m%x != 0){
        x--;
    }
    return x;
}
