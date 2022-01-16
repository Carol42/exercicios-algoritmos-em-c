#include <stdio.h>

void pares_0an(int);

main(){
    int n;
    printf("Informe  um numero inteiro positivo (n): ");
    scanf("%d", &n);
    pares_0an(n);
}

void pares_0an(int n){
    int numero;

    printf("Numeros pares de 0 a %d: ", n);
    for(numero=0;numero<=n;numero+=2){
        printf("%d " , numero);
    }
}
