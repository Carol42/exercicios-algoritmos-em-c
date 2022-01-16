#include <stdio.h>

main(){
    int pessoas[29][1], i, j;
    i=0;
    j=0;
    for(i=0;i<5;i++){
        printf("Informe o nome: ");
        scanf("%s", &pessoas[i][0]);
     //   for(j=0;j<1;j++){
            printf("Informe o sexo: ");
            scanf("%s", &pessoas[i][1]);
      //  }
    }
    i=0
     for(i=0;i<5;i++){
            printf("%s\n", &pessoas[i][1]);
     //   for(j=0;j<1;j++){
            printf("%s\n", &pessoas[i][0]);
     //    }
    }
}
