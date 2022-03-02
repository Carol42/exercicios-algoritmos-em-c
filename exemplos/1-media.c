/* Calcular a média das duas notas de um aluno. A primeira nota é igual a 5.5 e a segunda nota é igual a 8.5. Informe ainda se ele está aprovado ou de prova final, baseado na média de aprovação igual a 7.0.
Calcula média de duas notas e verifica aprovação*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1, nota2, media;
    nota1 = 5.5;
    nota2 = 8.5;
    media = (nota1 + nota2)/2;
    printf ("Media = %f", media);
    if (media >= 7.0)
        printf(" - Aprovado");
    else // se a média é menor ou igual a 7.0
        printf(" - Prova final");
    printf("\n\n"); // salta 2 linhas em branco
    system("pause"); // não permite que a janela do prompt feche
    return 0;
}
