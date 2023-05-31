#include <stdio.h>

int main() {

    int j, i, contador;

    contador = 1;
    i = 1;
    j = 7;

    while (contador != 0)
    {
        printf("I=%d J=%d\n",i, j);
        printf("I=%d J=%d\n",i, j-1);
        printf("I=%d J=%d\n",i, j-2);

        if (i == 9)
        {
            contador = 0;
        }
        else
        { 
            i += 2;
            j += 2;
        }
    }
    
    return 0;
}
