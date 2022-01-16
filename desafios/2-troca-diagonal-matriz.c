#include <stdio.h>

main(){
int i,j,x;
printf("Qual e a ordem da matriz? ");
    scanf("%d", &x);
int matriz[x][x], TEMP[x][x];
 for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            printf("Insira o elemento da %da linha e %da coluna: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

 for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

i=1;
j=x;
while (i<=x && j>=1) {
    TEMP[i][i] = matriz[i][i];
    matriz[i][i] = matriz[i][j];
    matriz[i][j] = TEMP[i][i];
    i++;
    j--;
}

 for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}
}