/* Faça um programa que leia o nome de um vendedor, 
o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, 
informar o total a receber no final do mês, 
com duas casas decimais. */

#include <stdio.h>

int main()
{

    char nome[1000];
    double salario_fixo, total_vendas, total;

    scanf("%s", &nome); 
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    total = salario_fixo + (total_vendas*0.15);

    printf("TOTAL = R$ %0.2lf\n", total);

    return 0;
}