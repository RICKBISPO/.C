#include <stdio.h>

int palindromo_ounao(int n);

int main() {
    
    int num;
    
    printf("Escreva um nmr inteiro de 6 digitos: \n");
    scanf("%d",&num);

    palindromo_ounao(num);

    return 0;
}

int palindromo_ounao(int n) {

    int n1, n2, n3, n4, n5, n6;
    char num1, num2;

    n1 = n/100000;
    n2 = (n%100000)/10000;
    n3 = ((n%100000)%10000)/1000;
    n4 = (((n%100000)%10000)%1000)/100;
    n5 = ((((n%100000)%10000)%1000)%100)/10;
    n6 = ((((n%100000)%10000)%1000)%100)%10;

    num1 = (n1, n2, n3, n4, n5, n6);
    num2 = (n6, n5, n4, n3, n2, n1);

    if (num1 == num2)
    {
        printf("PALINDROMO!!\n");
    }
    else
    {
        printf("NAO PALINDROMO!!\n");
    }
    
    return 0;
}
