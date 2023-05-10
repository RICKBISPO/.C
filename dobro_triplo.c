#include <stdio.h>

int positivo_negativo(int x);
int triplo(int y);
int dobro(int y);

int main() {
    
    int num;

    scanf("%d",&num);

    positivo_negativo(num);

    return 0;
}

int positivo_negativo(int x) {

    if (x > 0)
    {
        return dobro(x);
    }
    else
    {
        return triplo(x);
    }
    
}

int triplo(int y) {

    int z;

    z = y*3;
    
    return printf("NEGATIVO = %d\n",z);
}

int dobro(int y) {
    
    int z;

    z = y*2;

    return printf("POSITIVO = %d\n",z);
}