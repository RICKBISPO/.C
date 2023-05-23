#include <stdio.h>

int par(int n);
void quadrado(int n);

int main() {
    
    int number, contador;

    scanf("%d",&number);

    contador = 0;

    if (number > 5 && number < 2000)
    {    
        number++;

        while (contador < number)
        {

            if (par(contador))
            {
                quadrado(contador);
            }

            contador++;
        }
    }

    return 0;
}

int par(int n) {

    int r = 0;

    if (n % 2 == 0)
    {
        r = n;
    }

    return r;
}

void quadrado(int n) {

    printf("%d^2 = %d\n",n, n*n);

}