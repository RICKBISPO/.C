#include <stdio.h>

float eh_positivo(float n);

int main() {
    
    float contador, number;
    int positivo;

    positivo = 0;
    contador = 6;

    while (contador > 0)
    {
        scanf("%f",&number);

        if (eh_positivo(number))
        {
            positivo++;
        }

        contador--;
    }

    printf("%d valores positivos\n", positivo);
    
    return 0;
}

float eh_positivo(float n) {

    if (n > 0)
    {
        return n;
    }

    return 0;
}