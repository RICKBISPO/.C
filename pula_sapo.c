#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
int main() {
    
    char resultado[10];
    char perdeu[10] = "GAME OVER";
    char ganhou[8] = "YOU WIN";
    int pulo, qtd_cano;
    int tm_cano1, tm_cano2, tm;
    int i = 0;

    scanf("%d %d",&pulo, &qtd_cano);
    strcpy(resultado, ganhou);

    while (i < qtd_cano && strcmp(resultado, ganhou) == 0)
    {      
        if (i == 0)
        {
            scanf("%d",&tm_cano1);
            scanf("%d",&tm_cano2);

            tm = abs(tm_cano1 - tm_cano2);

            if (tm > pulo)
            {
                strcpy(resultado, perdeu);
            }

            tm_cano1 = tm_cano2;
        }
        else
        {
            scanf("%d",&tm_cano2);
            tm = abs(tm_cano1 - tm_cano2);

            if (tm > pulo)
            {
                strcpy(resultado, perdeu);
            }

            tm_cano1 = tm_cano2;
        }

        i++;
    } 
 
    puts(resultado);

    return 0;
}