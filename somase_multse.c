#include <stdio.h>

int calculo_ab (int x, int y);
int soma_ab (int a, int b);
int mult_ab (int a, int b);

int main() {
    
    int a, b, c;

    scanf("%d",&a);
    scanf("%d",&b);

    c = calculo_ab(a, b);

    printf("%d\n",c);

    return 0;
}

int calculo_ab (int x, int y) {

    if (x == y)
    {
        return soma_ab(x, y);
    }
    else
    {
        return mult_ab (x, y);
    }
    
}

int soma_ab (int a, int b) {

    int c;

    c = a + b;

    return c;
}

int mult_ab (int a, int b) {

    int c;

    c = a * b;

    return c;
}