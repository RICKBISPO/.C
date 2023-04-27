#include <stdio.h>
#include <math.h>


double x1_bask(double a1,double b1,double c1);
double x2_bask(double a2,double b2,double c2);

int main() {
    
    double a, b, c, x1, x2;

    printf("Digite um valor para A: \n");
    scanf("%lf",&a);
    printf("Digite um valor para B: \n");
    scanf("%lf",&b);
    printf("Digite um valor para C: \n");
    scanf("%lf",&c);

    x1 = x1_bask(a, b, c);
    x2 = x2_bask(a, b, c);

    printf("X1 = %0.2lf\n",x1);
    printf("X2 = %0.2lf\n",x2);

    return 0;
}

double x1_bask(double a1,double b1,double c1) {
    
    double x01;
    x01 = ((b1*-1) + (sqrt(b1*b1 - 4*a1*c1)))/2*a1;

    return x01;
}

double x2_bask(double a2,double b2,double c2) {

    double x02;
    x02 = ((b2*-1) - (sqrt(b2*b2 - 4*a2*c2)))/2*a2;

    return x02;
}