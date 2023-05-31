#include <stdio.h>

int eh_impar(int x);

int main() {
    
    int number1, number2, contador;
    int n1, n2, soma;

    scanf("%d",&contador);

    while (contador > 0)
    {
        scanf("%d %d",&number1, &number2);

        if (number1 < number2)
        {
            n1 = number1;
            n2 = number2;
        }
        else
        {
            n1 = number2;
            n2 = number1;
        }
        
        while (n1 < n2)
        {
            n1++;

            if (eh_impar(n1) == 1 && n1 != n2)
            {
                soma += n1;
            }
        }

        printf("%d\n",soma);
        soma = 0;

        contador--;
    }

    return 0;
}

int eh_impar(int x) {

    int r = 0;

    if (x % 2 != 0)
    {
        r = 1;
    }

    return r;
}