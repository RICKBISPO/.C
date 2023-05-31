#include <stdio.h>

double pct_cobaias(int x, int y);

int main() {
    
    int contador, cobaia;
    char tipo;
    int soma_cobaia, soma_coelho, soma_rato, soma_sapo;
    double pct_coelho, pct_rato, pct_sapo;


    scanf("%d",&contador);

    soma_cobaia = 0;
    soma_coelho = 0;
    soma_rato = 0;
    soma_sapo =  0;

    while (contador > 0)
    {
        scanf("%d %c",&cobaia, &tipo);

        if (cobaia >= 1 && cobaia <= 15)
        {
            if (tipo == 'C' || tipo == 'R' || tipo == 'S')
            {
                soma_cobaia += cobaia;

                if (tipo == 'C')
                {
                    soma_coelho += cobaia;
                }

                if (tipo == 'R')
                {
                    soma_rato += cobaia;
                }

                if (tipo == 'S')
                {
                    soma_sapo += cobaia;
                }
            }
        }

        contador--;
    }

    pct_coelho = pct_cobaias(soma_coelho, soma_cobaia);
    pct_rato = pct_cobaias(soma_rato, soma_cobaia);
    pct_sapo = pct_cobaias(soma_sapo, soma_cobaia);

    printf("Total: %d cobaias\n",soma_cobaia);

    printf("Total de coelhos: %d\n",soma_coelho);
    printf("Total de ratos: %d\n",soma_rato);
    printf("Total de sapos: %d\n",soma_sapo);

    printf("Percentual de coelhos: %.2lf %\n",pct_coelho);
    printf("Percentual de ratos: %.2lf %\n",pct_rato);
    printf("Percentual de sapos: %.2lf %\n",pct_sapo);

    return 0;
}

double pct_cobaias(int x, int y) {

    double pct;

    pct = (double)x*100.0/(double)y;

    return pct;
}