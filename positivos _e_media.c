#include <stdio.h>

float eh_positivo(float n);

int main() {
    
    float contador, number, number_positivo, media;
    int positivo;

    number_positivo = 0;
    positivo = 0;
    contador = 6;

    while (contador > 0)
    {
        scanf("%f",&number);

        if (eh_positivo(number))
        {
            positivo++;
            number_positivo = number_positivo + number;
        }

        contador--;
    }

    media = number_positivo / positivo;
    
    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", media);
    
    return 0;
}

float eh_positivo(float n) {

    if (n > 0)
    {
        return n;
    }

    return 0;
}