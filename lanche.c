#include <stdio.h>

double calculo_lanche(int x, int y);

int main() {
    
    int cod, qtd;

    scanf("%d %d",&cod, &qtd);

    printf("Total: R$ %0.2lf\n",calculo_lanche(cod, qtd));
    
    return 0;
}

double calculo_lanche(int x, int y) {

    double total;

    if (x == 1)
    {
        total = 4.00 * y;
    }
    else 
    {
        if (x == 2)
        {
            total = 4.50 * y;
        }
        else
        {
            if (x == 3)
            {
                total = 5.00 * y;
            }
            else
            {
                if (x == 4)
                {
                    total = 2.00 * y;
                }
                else
                {
                    if (x == 5)
                    {
                        total = 1.50 * y;
                    }
                }
            }
        }
    }

    return total;
}