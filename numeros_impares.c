#include <stdio.h>

int eh_impar(int i);

int main() {
    
    int number, impares;

    scanf("%d",&number);

    impares = 0;

    if (number >= 1 && number <= 1000)
    {
        while(impares < number) 
        {
            impares += 1;
            eh_impar(impares);
        }
    }

    return 0;
}

int eh_impar(int i) {

    if (i % 2 != 0)
    {
        printf("%d\n",i);
    } 

    return 0;
}