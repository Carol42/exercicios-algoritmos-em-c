#include <stdio.h>

main(){
    int n, i = 0;
    printf("De qual numero voce deseja que seja exibida a tabuada? ");
    scanf("%d", &n);
    for(i=0;i<=10;i++){
        printf("%d X %d = %d\n", n,i,n*i);
    };
}
