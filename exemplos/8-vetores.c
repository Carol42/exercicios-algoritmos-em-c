/* Diversas ações com vetores. */
#include <stdio.h>
#include <stdlib.h>

// a diretiva define serve para aumentar o nível de alterabilidade do programa
#define MAX_NOME 30

int main()
{
    // Declaração do vetor x com capacidade para 10 inteiros e a sua inicialização com 10 valores
    int x[10] = { 20, 30, 45, 67, 5, 49, 34, 21, 99, 89 };

    // Declaracão e inicialização do vetor y com 3 inteiros
    int y[] = { 34, 7, 44 };

    // Declaração do vetor z para 3 inteiros
    int z[3];

    // Inicalização dos três elementos do vetor z
    z[0] = 200;
    z[1] = 400;
    z[2] = 500;

    // Declaracão e inicialização do vetor de caracteres s
    // Vetor de caracteres com terminação de nulo é chamado de STRING
    char s[] = {'b','i', 'a', '\0'};

    // Declaração do vetor de caracteres t com incialização de uma constante
    // string (caracteres entre aspas duplas) Neste caso o nulo é colocado automaticamente no final, como 4o caractere
    char t[] = "bia";

    printf("Primeiro elemento do vetor x: %d \n", x[0]);
    printf("Segundo elemento do vetor y: %d \n", y[1]);
    printf("Terceiro elemento do vetor s: %c \n", s[2]);

    printf ("Todos os 10 elementos do vetor x: \n");
    int i;
    for(i=0; i < 10; i++)

        printf("%d ", x[i]);

// A exibicão de uma string pode ser feita com o formatador %s
    printf("\nTodos os elementos do vetor s: %s \n", s);
    printf("Todos os elementos do vetor t: %s \n", t);

// Entrada via teclado para uma string sem espaços em branco
// Observe que a função scanf fica sem o operador &
    char apelido [MAX_NOME];
    printf("Digite um nome (sem espacos): ");
    scanf("%s", apelido);
    printf ("Nome digitado: %s \n", apelido);

    // Entrada via teclado para uma string com espacos em branco
    // Neste caso usamos a função fflush(stdin) para esvaziar o buffer
    // de entrada (após uma scanf, o buffer fica sujo com um salto de linha)
    // A função gets lê todos caracteres até encontrar um salto de linha.
    char nomeCompleto [MAX_NOME];
    printf ("Digite um nome (pode conter espacos): ");
    fflush(stdin);
    gets (nomeCompleto);
    printf ("Nome digitado: %s", nomeCompleto);

    printf("\n\n\n");
    system ("pause");
    return 0;
}
