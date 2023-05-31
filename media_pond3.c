#include <stdio.h>
 
void media(double x, double y, double z);

int main() {
 
    double a, b, c;
    int contador;

    scanf("%d",&contador);

    while(contador > 0)
    {
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);

        media(a, b, c);

        contador--;
    }
    
    return 0;
}

void media(double x, double y, double z) {

    double m;
    
    m = (x*2 + y*3 + z*5)/10;

    printf("%.1lf\n",m);
}