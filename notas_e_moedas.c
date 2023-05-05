#include <stdio.h>

int calculo(double num);

int main() {

    double numero;

    scanf("%lf",&numero);

    calculo(numero);

    return 0;
}

int calculo(double num) {

    //TRANSFORMA PARA INTEIRO
    int n;
    //NOTAS 
    int n100, n50, n20, n10, n5, n2;
    //MOEDAS 
    int m1, m05, m025, m010, m005, m001;

    //NOTAS
    n = num;

    n100 = n/100;
    n50 = (n%100)/50;
    n20 = ((n%100)%50)/20;
    n10 = (((n%100)%50)%20)/10;
    n5 = ((((n%100)%50)%20)%10)/5;
    n2 = (((((n%100)%50)%20)%10)%5)/2;

    //MOEDAS 
    m1 = (((((n%100)%50)%20)%10)%5)%2;

    n = num*100;
    n = n%100;

    m05 = n/50;
    n = n%50;
    m025 = n/25;
    n = n%25;
    m010 = n/10;
    n = n%10;
    m005 = n/5;
    m001 = n%5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1,00\n",m1);
    printf("%d moeda(s) de R$ 0,50\n",m05);
    printf("%d moeda(s) de R$ 0,25\n",m025);
    printf("%d moeda(s) de R$ 0,10\n",m010);
    printf("%d moeda(s) de R$ 0,05\n",m005);
    printf("%d moeda(s) de R$ 0,01\n",m001);

    return 0;
}
