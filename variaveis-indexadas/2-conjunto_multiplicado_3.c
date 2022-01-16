#include <stdio.h>
#define TAM 3

main(){
    int A[TAM], B[TAM], i;

    for(i=0; i<TAM; i++){
        printf("Informe o A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    for(i=0; i<TAM; i++){
        B[i] = A[i] * 3;
        printf("\nB[%d]: %d", i, B[i]);
    }
}
