#include <stdio.h>

void media_n1n2(float x, float y);
int sim_ou_nao();

int main() {
    
    int contador;
    float n1, n2;
    float n, temp;

    temp = -1;
    contador = 1;

    while (contador != 0)
    {
        scanf("%f",&n);

        if (temp >= 0)
        {
            if (n < 0 || n > 10)
            {
                printf("nota invalida\n");
            }
            else
            {
                n2 = n;
                media_n1n2(temp, n2);
                
                contador = sim_ou_nao();
                temp = -1;
            }  
        }
        else
        {
            if (n < 0 || n > 10)
            {
                printf("nota invalida\n");
            }
            else
            {
                n1 = n;
                temp = n;

                scanf("%f",&n);

                if (n < 0 || n > 10)
                {
                    printf("nota invalida\n");
                }
                else
                {
                    n2 = n;
                    media_n1n2(n1, n2);
                    
                    contador = sim_ou_nao();
                    temp = -1;
                }  
            }
        }
    }
    
    return 0;
}

void media_n1n2(float x, float y) {

    float m;

    m = (x + y) / 2;
    printf("media = %.2f\n",m);

}

int sim_ou_nao() {

    float sn;
    int r, contador;

    contador = 1;

    while (contador != 0)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f",&sn);

        if (sn >= 1.00 || sn <= 2.00)
        {
            if (sn == 1)
            {
                r = 1;
                contador = 0;
            }

            if (sn == 2)
            {
                r = 0;
                contador = 0;
            }
        }
    }
    
    return r;
}