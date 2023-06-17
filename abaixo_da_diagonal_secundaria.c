#include <stdio.h>
#define MAX 12

int main() {
    
    float matriz[MAX][MAX];
    float soma, media;
    int temp, contador;
    char o;

    soma = 0;
    contador = 0;

    scanf(" %c",&o);
    fflush(stdin);

    for (int linha = 0; linha < MAX; linha++)
    {
        for (int coluna = 0; coluna < MAX; coluna++)
        {
            scanf("%f",&matriz[linha][coluna]);

            temp = linha + coluna;

            if (temp >= MAX)
            {
                soma += matriz[linha][coluna];
                contador++;
            }
        }
    }

    if (o == 'S')
    {
        printf("%.1f\n",soma);
    }

    if (o == 'M')
    {
        media = soma / contador;
        printf("%.1f\n",media);
    }
    
    return 0;
}
