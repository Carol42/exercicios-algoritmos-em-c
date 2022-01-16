#include <stdio.h>

main(){
    int n, soma;
    soma = 0;
    for(n=3;n<=300;n+=3){
        soma = soma + n;
    }
    printf("A soma dos multiplos de 3 entre 1 e 300 e: %d", soma);
}
