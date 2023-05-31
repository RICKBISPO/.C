#include <stdio.h>

int main() {
    
    int contador, teste;
    int pa, pb;
    double g1, g2;

    scanf("%d",&teste);

    contador = 0;

    if (teste >= 1 && teste <= 3000)
    {
        while (teste > 0)
        {
            scanf("%d %d %lf %lf",&pa, &pb, &g1, &g2);
            
            while ((pa <= pb) && (contador < 101))
            {
                pa += (int)((pa*g1)/100);
                pb += (int)((pb*g2)/100);

                contador++;
            }

            if (contador > 100)
            {
                printf("Mais de 1 seculo.\n");
            }
            else
            {
                printf("%d anos.\n", contador);
            }
                    
            contador = 0;
            teste--;
        }
    }
    
    return 0;
}

