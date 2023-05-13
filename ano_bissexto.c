#include <stdio.h>

int eh_bissexto(int ano);
int dataValida(int dia, int mes, int ano);

int main() {

    int dia, mes, ano;

    printf("Digite um dia: \n");
    scanf("%d",&dia);

    printf("Digite um mes: \n");
    scanf("%d",&mes);

    printf("Digite um ano: \n");
    scanf("%d",&ano);

    if (dataValida(dia, mes, ano) == 1)
    {
        printf("Data valida!!\n");
    }
    else
    {
        printf("Data invalida!!\n");
    }
    
    return 0;
}

int eh_bissexto(int ano) {

    int retorno;

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {
        retorno = 1;
    }
    
    return retorno;
}

int dataValida(int dia, int mes, int ano) {

    int retorno;
    int bissexto = eh_bissexto(ano);

    if ((ano >= 1900) && (ano <= 2200))
    {
        switch (mes) 
        {
            case 1: 
            case 2: 
                if (bissexto && dia >= 1 && dia <= 29) 
                {
                    retorno = 1;
                } 
                else if (!bissexto && dia >= 1 && dia <= 28) 
                {
                    retorno = 1;
                }
            break;

            case 3: 
            case 4: 
            case 5: 
            case 6: 
            case 7:
            case 8: 
            case 9: 
            case 10: 
            case 11: 
                if (dia >= 1 && dia <= 30) 
                {
                    retorno = 1;
                }
            break;

            case 12: 
                if (dia >= 1 && dia <= 31) 
                {
                    retorno = 1;
                }
            break;

            default:
            break;
        }
    }

    return retorno;
}