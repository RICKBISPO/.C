#include <stdio.h>
 
int main() {
 
    char name[100], pct = '%';
    int tentativas;
    int s, b, a;
    int saque, bloqueio, ataque;
    int pct_saque, pct_bloqueio, pct_ataque;
    double result[3];

    scanf("%d",&tentativas);

    saque = 0;
    bloqueio = 0;
    ataque = 0;

    pct_saque = 0;
    pct_bloqueio = 0;
    pct_ataque = 0;

    for (int i = 0; i < tentativas; i++)
    {
        scanf("%s",name);
        scanf("%d %d %d",&s, &b, &a);

        saque += s;
        bloqueio += b;
        ataque += a; 

        scanf("%d %d %d",&s, &b, &a);

        pct_saque += s;
        pct_bloqueio += b;
        pct_ataque += a;
    }

    result[0] = saque != 0 ? ((double)pct_saque * 100) / (double)saque : 0;
    result[1] = bloqueio != 0 ? ((double)pct_bloqueio * 100) / (double)bloqueio : 0;
    result[2] = ataque != 0 ? ((double)pct_ataque * 100) / (double)ataque : 0;


    printf("Pontos de Saque: %.2lf %c.\n",result[0], pct);
    printf("Pontos de Bloqueio: %.2lf %c.\n",result[1] ,pct);
    printf("Pontos de Ataque: %.2lf %c.\n",result[2] ,pct);
  
    return 0;
}

