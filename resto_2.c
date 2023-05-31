#include <stdio.h>

int resto_dois(int x, int y);

int main() {

    int n, contador;
    
    scanf("%d", &n);

    contador = 0;

    while (contador < 10000)
    {
        contador++;

        resto_dois(n, contador);
    }
    
    return 0;
}

int resto_dois(int x, int y) {

    if (y % x == 2)
    {
        printf("%d\n", y);
    }

    return 0;
}
