#include <stdio.h>

int main() {
    
    int number, contador;

    scanf("%d",&number);

    contador = 0;

    while(contador < 6) 
    {
        if (number % 2 != 0)
        {
            printf("%d\n",number);
            contador++;
        }

        number++;
    }

    return 0;
}
