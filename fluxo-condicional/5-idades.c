#include <stdio.h>

main(){
    int idades[49],i;
    for(i=0;i<49;i++){
        printf("Informe a idade: ");
        scanf("%d", &idades[i]);
        if(idades[i]>=18){
            printf("Maior de idade\n");
        }
        else{
            printf("Menor de idade\n");
        }
    }

}
