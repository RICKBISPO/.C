#include <stdio.h>

int nmr_extenso(int n);

int main() {
    
    int nmr;

    printf("Escreva um nmr inteiro entre 20 e 59: \n");
    scanf("%d",&nmr);

    nmr_extenso(nmr);

    return 0;
}

int nmr_extenso(int n){

    if (n < 20 || n > 59)
    {
        printf("NUMERO INVALIDO!!\n");
    }
    else 
    {
        if (n == 20)
        {
            printf("VINTE\n");
        }
        else if (n == 21)
        {
            printf("VINTE E UM\n");
        }
        else if (n == 22)
        {
            printf("VINTE E DOIS\n");
        }
        else if (n == 23)
        {
            printf("VINTE E TRES\n");
        }
        else if (n == 24)
        {
            printf("VINTE E QUATRO\n");
        }
        else if (n == 25)
        {
            printf("VINTE E CINCO\n");
        }
        else if (n == 26)
        {
            printf("VINTE E SEIS\n");
        }
        else if (n == 27)
        {
            printf("VINTE E SETE\n");
        }
         else if (n == 28)
        {
            printf("VINTE E OITO\n");
        }
        else if (n == 29)
        {
            printf("VINTE E NOVE\n");
        }
         else if (n == 30)
        {
            printf("TRINTA\n");
        }
        else if (n == 31)
        {
            printf("TRINTA E UM\n");
        }
        else if (n == 32)
        {
            printf("TRINTA E DOIS\n");
        }
        else if (n == 33)
        {
            printf("TRINTA E TRES\n");
        }
        else if (n == 34)
        {
            printf("TRINTA E QUATRO\n");
        }
        else if (n == 35)
        {
            printf("TRINTA E CINCO\n");
        }
        else if (n == 36)
        {
            printf("TRINTA E SEIS\n");
        }
        else if (n == 37)
        {
            printf("TRINTA E SETE\n");
        }
        else if (n == 38)
        {
            printf("TRINTA E OITO\n");
        }
        else if (n == 39)
        {
            printf("TRINTA E NOVE\n");
        }
        else if (n == 40)
        {
            printf("QUARENTA\n");
        }
        else if (n == 41)
        {
            printf("QUARENTA E UM\n");
        }
        else if (n == 42)
        {
            printf("QUARENTA E DOIS\n");
        }
        else if (n == 43)
        {
            printf("QUARENTA E TRES\n");
        }
        else if (n == 44)
        {
            printf("QUARENTA E QUATRO\n");
        }
        else if (n == 45)
        {
            printf("QUARENTA E CINCO\n");
        }
        else if (n == 46)
        {
            printf("QUARENTA E SEIS\n");
        }
        else if (n == 47)
        {
            printf("QUARENTA E SETE\n");
        }
        else if (n == 48)
        {
            printf("QUARENTA E OITO\n");
        }
        else if (n == 49)
        {
            printf("QUARENTA E NOVE\n");
        }
        else if (n == 50)
        {
            printf("CINQUENTA\n");
        }
        else if (n == 51)
        {
            printf("CINQUENTA E UM\n");
        }
        else if (n == 52)
        {
            printf("CINQUENTA E DOIS\n");
        }
        else if (n == 53)
        {
            printf("CINQUENTA E TRES\n");
        }
        else if (n == 54)
        {
            printf("CINQUENTA E QUATRO\n");
        }
        else if (n == 55)
        {
            printf("CINQUENTA E CINCO\n");
        }
        else if (n == 56)
        {
            printf("CINQUENTA E SEIS\n");
        }
        else if (n == 57)
        {
            printf("CINQUENTA E SETE\n");
        }
        else if (n == 58)
        {
            printf("CINQUENTA E OITO\n");
        }
        else if (n == 59)
        {
            printf("CINQUENTA E NOVE\n");
        }
    }
    
    return 0;
}