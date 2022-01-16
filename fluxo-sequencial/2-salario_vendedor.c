#include <stdio.h>

main(){
    char nome[30];
    float salario_fixo, total_vendas, percentual_comissao;

    printf("Qual e o nome do vendedor? ");
    scanf("%s", &nome);
    printf("Qual e o seu salario fixo, em reais? ");
    scanf("%f", &salario_fixo);
    printf("Qual foi o valor (em reais) do total de vendas efetuadas por ele nesse mes? ");
    scanf("%f", &total_vendas);

    percentual_comissao = 0.12;

    printf("O salario total do vendedor %s e R$%5.2f, sendo que seu salario fixo e R$ %5.2f", nome, percentual_comissao * total_vendas + salario_fixo, salario_fixo);
}
