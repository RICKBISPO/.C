/* Escreva um programa que leia o número de um funcionário, 
seu número de horas trabalhadas, 
o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, 
com duas casas decimais. */

#include <stdio.h>
 
int main() {
 
    int num_funcionario, num_hrs_trabalhadas;
    float vl_por_hr, salario;

    scanf("%d",&num_funcionario);
    scanf("%d",&num_hrs_trabalhadas);
    scanf("%f",&vl_por_hr);
   
    salario = vl_por_hr * num_hrs_trabalhadas;

    printf("NUMBER = %d\n",num_funcionario);
    printf("SALARY = U$ %0.2f\n",salario);

    return 0;
}