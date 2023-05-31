#include <stdio.h>

int main() {
    
    int number, contador;
    int fixa_number, fixa_contador;

    contador = 0;
    fixa_number = 0;

    while (contador < 100)
    {
        contador++;
        scanf("%d",&number);

        if (number > fixa_number)
        {
            fixa_number = number;
            fixa_contador = contador;
        }
    }

    printf("%d\n",fixa_number);
    printf("%d\n",fixa_contador);

    return 0;
}

