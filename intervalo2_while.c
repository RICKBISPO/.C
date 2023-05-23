#include <stdio.h>

int in(int n);

int main() {
    
    int contador, number;
    int dentro, fora;

    scanf("%d",&contador);

    dentro = 0;
    fora = 0;

    while (contador > 0)
    {
        scanf("%d",&number);

        if (in(number))
        {
            dentro++;
        }
        else
        {
            fora++;
        }

        contador--;
    }

    printf("%d in\n",dentro);
    printf("%d out\n",fora);

    return 0;
}

int in(int n) {

    int r = 0;

    if (n >= 10 && n <= 20)
    {
        r = 1;
    }

    return r;
}