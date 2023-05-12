#include <stdio.h> 
#include <stdlib.h>

int calculo_hrs(int x, int y);

int main() {
    
    int hini, hfim;

    scanf("%d %d",&hini ,&hfim);

    calculo_hrs(hini, hfim);

    return 0;
}

int calculo_hrs(int x, int y) {

    if (x == y)
    {
        printf("O JOGO DUROU %d HORA(S)\n",abs(24 - x+y));
    }
    else
    {
        if (x <= y)
        {
            printf("O JOGO DUROU %d HORA(S)\n",abs(x-y));
        }
        else
        {
            if (x >= y)
            {
                printf("O JOGO DUROU %d HORA(S)\n",abs(24 - x+y));
            }
        } 
    }

    return 0;
}