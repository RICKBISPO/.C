#include <stdio.h>

int main() {
    
    int contador;
    int temp1, temp2, n;

    scanf("%d",&contador);

    temp1 = 0;
    temp2 = 1;

    if (contador > 0 && contador < 46)
    {
        printf("%d ",temp1);
        contador--;

        while (contador > 0)
        {
            if (contador == 1)
            {
                printf("%d\n",temp2);
                contador--;
            }
            else
            {
                printf("%d ",temp2);

                n = temp1 + temp2;
                temp1 = temp2;
                temp2 = n;
                
                contador--;
            }
        }
    }
    
    return 0;
}
