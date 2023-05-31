#include <stdio.h>

void intervalo(int n, int m);

int main() {
    
    int number1, number2;
    int contador;

    contador = 1;

    while (contador != 0)
    {
        scanf("%d %d",&number1, &number2);

        if (number1 <= 0 || number2 <= 0)
        {
            contador = 0;
        }
        else
        {
            if (number1 < number2)
            {
                intervalo(number1, number2);
            }
            else
            {
                intervalo(number2, number1);
            }
        }
    }

    return 0;
}

void intervalo(int n, int m) {

    int soma = 0;

    while (n <= m)
    {
        printf("%d ",n);
                
        soma+=n;

        n++;
    }

    printf("Sum=%d\n",soma);

}