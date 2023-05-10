#include <stdio.h>

int soma(int x, int y);
int selecao(int a1, int b1, int c1, int d1);

int main() {
    
    int a, b, c, d;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    selecao(a, b, c, d);

    return 0;
}

int selecao(int a1, int b1, int c1, int d1) {

    if (b1 > c1 && d1 > a1)
    {
        if (soma(c1, d1) > soma(a1, b1))
        {
            if (c1 > 0 && d1 > 0)
            {
                if (a1%2 == 0)
                {
                    printf("Valores aceitos\n");
                }
                else
                {
                    printf("Valores nao aceitos\n");
                }
            }
            else
            {
                printf("Valores nao aceitos\n");
            }
        }
        else
        {
            printf("Valores nao aceitos\n");
        }
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    
    return 0;
}

int soma(int x, int y) {

    int sm;

    sm = x + y;

    return sm;
}