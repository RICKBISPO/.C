#include <stdio.h>

void multpl(int x, int y);

int main() {
    
    int n, contador;

    scanf("%d", &n);

    contador = 1;

    if (n > 2 && n < 1000)
    {
        while (contador <= 10)
        {
            multpl(n, contador);

            contador++;
        }
    }

    return 0;
}

void multpl(int x, int y) {

    printf("%d x %d = %d\n",y, x, x*y);

}
