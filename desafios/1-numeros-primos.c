#include <stdio.h>

main(){
    int numero, i, div, x, y;
    printf("Informe 100 numeros inteiros positivos ");
    for(i=1;i<=100;i++){
        div=0;
        printf("\n%do numero: ", i);
        scanf("%d", &numero);
        for(x=1;x<=numero;x++){
            for(y=1;y<=x;y++){
                if(numero%x == 0){
                    div = div + 1;
                    break;
                }
            }
        }
            if(div == 2)
                printf("numero primo\n");
    }
}