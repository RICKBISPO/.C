#include <stdio.h>

int main() {
    
    int number;
    int contador;

    contador = 1;

    while (contador != 0)
    {
        scanf("%d",&number);

        if (number == 2002)
        {
            printf("Acesso Permitido\n");
            contador = 0;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}

