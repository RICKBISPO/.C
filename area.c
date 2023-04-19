/* Escreva um programa que leia três valores com ponto flutuante de dupla precisão: 
A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B. */

#include <stdio.h>
 
int main() {
 
    double A, B, C;
    double pi, triang, circ, trapz, quad, retang;

    pi = 3.14159;

    scanf("%lf %lf %lf",&A,&B,&C);

    triang = (A*C) /2;
    circ = (C*C) * pi;
    trapz = ((A+B)*C) /2;
    quad = B*B;
    retang = A*B;

    printf("TRIANGULO: %0.3lf\n",triang);
    printf("CIRCULO: %0.3lf\n",circ);
    printf("TRAPEZIO: %0.3lf\n",trapz);
    printf("QUADRADO: %0.3lf\n",quad);
    printf("RETANGULO: %0.3lf\n",retang);
    
    return 0;
}