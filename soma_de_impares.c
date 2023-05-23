#include <stdio.h>

int impar(int i);
int maior(int x, int y);

int main() {
    
    int n1, n2, x, y, soma;

    scanf("%d",&n1);
    scanf("%d",&n2);

    y = maior(n1, n2);
    
    if (n1 == y)
    {
        x = n2;
    }
    else
    {
        x = n1;
    }
    
    soma = 0;
    y--;

    while (x < y)
    {
        x++;
        
        if (impar(x) == 1)
        {
            soma += x;
        }
    }
    
    printf("%d\n",soma);

    return 0;
}

int impar(int i) {

    int r;
    
    r = 0;

    if (i % 2 != 0)
    {
        r = 1;
    } 

    return r;
}

int maior(int x, int y) {
    
    int r;

    r = 0;

    if (x > y) 
    {
        r = x;
    } 
    else 
    {
        r = y;
    }

    return r;
}

