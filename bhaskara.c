#include <stdio.h>
#include <math.h>

double delta(double a0, double b0, double c0);
double r1_bask(double a1, double b1, double c1);
double r2_bask(double a2, double b2, double c2);

int main() {
    
    double a, b, c;

    scanf("%lf %lf %lf",&a ,&b ,&c);

    if (delta(a, b, c) < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n",r1_bask(a, b, c));
        printf("R2 = %.5lf\n",r2_bask(a, b, c));
    }

    return 0;
}

double delta(double a0, double b0, double c0) {
    
    double dlt;
    dlt = ((b0 * b0) - 4 * a0 * c0);

    return dlt;
}

double r1_bask(double a1, double b1, double c1) {
    
    double r01;
    r01 = ((b1*-1) + (sqrt(delta(a1, b1, c1)))) / (2*a1);

    return r01;
}

double r2_bask(double a2, double b2, double c2) {

    double r02;
    r02 = ((b2*-1) - (sqrt(delta(a2, b2, c2)))) / (2*a2);

    return r02;
}
