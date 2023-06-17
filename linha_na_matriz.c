#include <stdio.h>
#define MAX 12

int main() {
    
    float matriz[MAX][MAX], soma, media;
    int row;
    char t;

    soma = 0;

    scanf("%d",&row);
    fflush(stdin);
    scanf(" %c",&t);
    fflush(stdin);

    for (int linha = 0; linha < MAX; linha++)
    {
        for (int coluna = 0; coluna < MAX; coluna++)
        {
            scanf("%f",&matriz[linha][coluna]);
        }
    }

    if (t == 'S')
    {
        for (int coluna = 0; coluna < MAX; coluna++)
        {
            soma += matriz[row][coluna];
        }

        printf("%.1f\n",soma);
    }

    if (t == 'M')
    {
        for (int coluna = 0; coluna < MAX; coluna++)
        {
            soma += matriz[row][coluna];
        }

        media = soma/MAX;

        printf("%.1f\n",media);
    }
    
    return 0;
}
