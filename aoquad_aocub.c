/* Desenvolva um programa que receba um número e apresente
como resultado o número elevado ao quadrado e o número elevado ao cubo */

#include <stdio.h>

int main(){
    
    float n1, cub, quad;

    printf("\n Escreva um nmr: ");
    scanf("%f",&n1 );
    
    quad = n1*n1;
    cub = n1*n1*n1;

    printf("\n O nmr elevado ao quadrado e: %f", quad);
    printf("\n O nmr elavado ao cubo e: %f", cub);

    return 0;
}
