#include <stdio.h>
#include <stdlib.h>

int calculo_terceiro(int n1, int n2, int n3);
int calculo_segundo(int n1, int n2, int n3, int third);
int calculo_primeiro(int n1, int n2, int n3, int third, int second);

int main() {
    
    int num1, num2, num3;
    int primeiro, segundo, terceiro;

    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    terceiro = calculo_terceiro(num1, num2, num3);
    segundo = calculo_segundo(num1, num2, num3, terceiro);
    primeiro = calculo_primeiro(num1, num2, num3, terceiro, segundo);
    
    printf("A ordem crescente dos nmrs e: %d < %d < %d\n",primeiro, segundo, terceiro);
    
    return 0;
}

int calculo_terceiro(int n1, int n2, int n3) {

    int third;

    third = (n1+n2+abs(n1-n2)) /2;
    third = (third+n3+abs(third-n3)) /2;

    return third;
}

int calculo_segundo(int n1, int n2, int n3, int third) {

    int second;

    if (n1 == third)
    {
        second = (n2+n3+abs(n2-n3)) /2;
    }
    else
    {
        if (n2 == third)
        {
            second = (n1+n3+abs(n1-n3)) /2;
        }
        else
        {
            second = (n1+n2+abs(n1-n2)) /2;
        }
        
    }
    
    return second;
}

int calculo_primeiro(int n1, int n2, int n3, int third, int second) {

    int first;

    first = abs((n1+n2+n3) - (third+second));

    return first;
}