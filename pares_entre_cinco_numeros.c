#include <stdio.h>

int eh_par(int arg);

int main() {
    
    int pares, contador, number;

    pares = 0;
    contador = 5;

    while (contador > 0)
    {
        scanf("%d",&number);

        if (eh_par(number))
        {
            pares++;
        }
        
        contador--;
    }

    printf("%d valores pares\n", pares);
    
    return 0;
}

int eh_par(int arg) {

    return arg % 2 == 0;
}