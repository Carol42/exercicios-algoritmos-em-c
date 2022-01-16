#include <stdio.h>
#define TAM 3

main(){
    int A[TAM], B[TAM], i;
    float C[TAM];

    for(i=0;i<TAM;i++){
        printf("Informe o A[%d]: ", i);
        scanf("%d", &A[i]);
    }
     for(i=0;i<TAM;i++){
        printf("Informe o B[%d]: ", i);
        scanf("%d", &B[i]);
    }
    for(i=0;i<TAM;i++){
        C[i] = (float) (A[i]+B[i]/2);
        printf("C[%d]: %f\n", i, C[i]);
    }
}
