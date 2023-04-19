/* Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferença do produto 
de A e B pelo produto de C e D segundo a fórmula: 
DIFERENCA = (A * B) - (C * D) */

#include <stdio.h>
 
int main() {
 
    int A, B, C, D, DIFERENCA;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);

    DIFERENCA = A * B - C * D;

    printf("DIFERENCA = %d\n",DIFERENCA);

    return 0;
}