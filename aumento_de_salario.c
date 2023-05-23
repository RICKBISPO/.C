#include <stdio.h> 

float reajuste(float sal, int pct);

int main() {
    
    float salario;

    scanf("%f",&salario);

    if (salario >= 0 && salario <= 400.00)
    {
        reajuste(salario, 15);
    }
    else
    {
        if (salario >= 400.01 && salario <= 800.00)
        {
            reajuste(salario, 12);
        }
        else
        {
            if (salario >= 800.01 && salario <= 1200.00)
            {
                reajuste(salario, 10);
            }
            else
            {
                if (salario >= 1200.01 && salario <= 2000.00)
                {
                    reajuste(salario, 7);
                }
                else
                {
                    reajuste(salario, 4);
                }
            }
        }
    }
             
    return 0;
}

float reajuste(float sal, int pct) {

    float reaj;
    char porcentagem = '%';

    reaj = sal * ((float)pct/100);
    sal = sal + reaj;

    printf("Novo salario: %.2f\n",sal);
    printf("Reajuste ganho: %.2f\n",reaj);
    printf("Em percentual: %d %c\n",pct, porcentagem);

    return 0;
}
