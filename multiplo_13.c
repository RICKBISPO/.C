#include <stdio.h>

void mltpl(int x, int y);

int main() {
    
    int number1, number2;

    scanf("%d",&number1);
    scanf("%d",&number2);

    if (number1 < number2)
    {
        mltpl(number1, number2);
    }
    else
    {
        mltpl(number2, number1);
    }

    return 0;
}

void mltpl(int x, int y) {

    int soma = 0;

    while (x <= y)
    {
        if (x % 13 != 0)
        {
            soma += x;
        }
        
        x++;
    }

    printf("%d\n",soma);

}