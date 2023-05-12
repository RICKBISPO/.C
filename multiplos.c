#include <stdio.h>

int calculo_multiplo(int x, int y);
void ehmultipllo();
void naoehmultiplo();

int main() {
    
    int a, b;

    scanf("%d",&a);
    scanf("%d",&b);

    calculo_multiplo(a, b);
    
    return 0;
}

int calculo_multiplo(int x, int y) {

    if (x%y == 0 || y%x == 0)
    {
        ehmultipllo();
    }
    else 
    {
        naoehmultiplo();
    }

    return 0;
}

void ehmultipllo() {

    printf("Sao Multiplos\n");

}

void naoehmultiplo() {

    printf("Nao sao Multiplos\n");

}