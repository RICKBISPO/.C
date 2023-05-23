#include <stdio.h>

int even(int n);
int odd(int n);
int positive(int n);

int main() {
    
    int contador, number;

    scanf("%d",&contador);

    if (contador < 10000)
    {
        while (contador > 0)
        {
            scanf("%d",&number);

            if (number == 0)
            {
                printf("NULL\n");
            }
            else
            {
                if (even(number))
                {
                    if (positive(number))
                    {
                        printf("EVEN POSITIVE\n");
                    }
                    else
                    {
                        printf("EVEN NEGATIVE\n");
                    }
                }

                if (odd(number))
                {
                    if (positive(number))
                    {
                        printf("ODD POSITIVE\n");
                    }
                    else
                    {
                        printf("ODD NEGATIVE\n");
                    }
                }
            }
            
            contador--;
        }
    }

    return 0;
}

int even(int n) {

    int r = 0;

    if (n % 2 == 0)
    {
        r = 1;
    }
    
    return r;
}

int odd(int n) {

    int r = 0;

    if (n % 2 != 0)
    {
        r = 1;
    }
    
    return r;
}

int positive(int n) {

    int r = 0;

    if (n > 0)
    {
        r = 1;
    }
    
    return r;
}
