#include <stdio.h>

main(){
    int numeros, i, contador;
    contador = 0;
    for(i=1;i<=5;i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros);
        printf("\n");
        if(numeros>=10 && numeros<=150){
            contador++;
        }
    }
    printf("Quantidade de numeros informados que estao entre 10 e 150: %d", contador);

}
