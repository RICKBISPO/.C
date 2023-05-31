#include <stdio.h>

void data(int d, int h, int m, int s);

int main() {

    int dia, hora, minuto, segundo;
    int h1, m1, s1;
    int h2, m2, s2;
    int d1, d2;

    scanf("Dia %d\n",&d1);
    scanf("%d : %d : %d\n",&h1, &m1, &s1);
    scanf("Dia %d\n",&d2);
    scanf("%d : %d : %d\n",&h2, &m2, &s2);
    
    dia = d2 - d1;
    hora = h2 - h1;
    minuto = m2 - m1;
    segundo = s2 - s1;

    data(dia, hora, minuto, segundo);

    return 0;
}

void data(int d, int h, int m, int s) {

    if(s < 0)
    {
        s+=60;
        m-=1;
    }

    if(m < 0)
    {
        m+=60;
        h-=1;
    }

    if(h < 0)
    {
        h+=24;
        d-=1;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

}