#include <stdio.h>

void cresc_ou_dcresc(int x, int y);

int main() {
    
    int number1, number2;
    int contador;

    contador = 1;

    while (contador != 0)
    {
        scanf("%d %d",&number1, &number2);

        if (number1 == number2)
        {
            contador = 0;
        }
        else
        {
            cresc_ou_dcresc(number1, number2);
        }
    }

    return 0;
}

void cresc_ou_dcresc(int x, int y) {

    if (x < y)
    {
        printf("Crescente\n");
    }
    else
    {
        printf("Decrescente\n");
    }

}