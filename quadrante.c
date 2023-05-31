#include <stdio.h>

void qdrt(int x, int y);

int main() {
    
    int number1, number2;
    int contador;

    contador = 1;

    while (contador != 0)
    {
        scanf("%d %d",&number1, &number2);

        if (number1 == 0 || number2 == 0)
        {
            contador = 0;
        }
        else
        {
            qdrt(number1, number2);
        }
    }

    return 0;
}

void qdrt(int x, int y) {

    if (x > 0 && y > 0)
    {
       printf("primeiro\n");
    }
    else if (x < 0 && y > 0)
    {
       printf("segundo\n");
    }
    else if (x < 0 && y < 0)
    {
       printf("terceiro\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("quarto\n");
    }

}