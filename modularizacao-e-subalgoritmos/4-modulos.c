#include <stdio.h>

main(){
    printf("Soma vetor: %d", soma_vetor())

}

int soma_vetor(int vetor[n]){
    int soma, i;
    soma = 0;
    for(i=0;i<=n;i++){
        soma += vetor[i];
    }
    return soma;
}
