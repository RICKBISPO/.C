#include <stdio.h>

void resto_div(int x, int y);
int eh_divisivel(int x);

int main() {

    int number1, number2;

    scanf("%d",&number1);
    scanf("%d",&number2);

    if (number1 < number2)
    {
        resto_div(number1, number2);
    }
    else
    {
        resto_div(number2, number1);
    }

    return 0;
}

void resto_div(int x, int y) {

    while (x < y)
    {
        x++;

        if (eh_divisivel(x) == 1)
        {
            printf("%d\n",x);
        }
        
    }

}

int eh_divisivel(int z) {

    int r = 0;

    if ((z % 5 == 2) || (z % 5 == 3))
    {
        r = 1;
    }
    else
    {
        r = 0;
    }
    
    return r;
}