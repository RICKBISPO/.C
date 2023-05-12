#include <stdio.h>

double salario1(double x);
double salario2(double x);
double salario3(double x);

int main() {
    
    double salario;

    scanf("%lf",&salario);

    if (salario < 2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        if (salario >= 2001.00 && salario <= 3000.00)
        {
            printf("R$ %.2lf\n",salario1(salario));
        }
        else
        {
            if (salario >= 3001.00 && salario <= 4500.00)
            {
                printf("R$ %.2lf\n",salario2(salario));
            }
            else
            {
                printf("R$ %.2lf\n",salario3(salario));
            }
        }
    }
    
    return 0;
}

double salario1(double x) {

    double sal1;

    sal1 = x - 2000.00; 
    sal1 = sal1 * 0.08;
    
    return sal1;
}

double salario2(double x) {

    double sal2; 

    sal2 = x - 3000.00;
    x = x - sal2;
    sal2 = sal2 * 0.18;
    sal2 = sal2 + salario1(x);

    return sal2;
}

double salario3(double x) {
    
    double sal3;

    sal3 = x - 4500.00;
    x = x - sal3;
    sal3 = sal3 * 0.28;
    sal3 = sal3 + salario2(x);

    return sal3;
}