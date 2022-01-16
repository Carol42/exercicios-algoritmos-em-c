#include <stdio.h>

main(){
    char nome_aluno[50];
    float n1, n2, n3, media;

    printf("Insira o nome do aluno: ");
    scanf("%s", &nome_aluno);
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;

    if(media >= 7){
        printf("O aluno %s esta aprovado!", nome_aluno);
    }
    else if(media <= 5){
        printf("O aluno %s esta reprovado", nome_aluno);
    }
    else{
        printf("O aluno %s esta de recuperacao", nome_aluno);
    }

}
