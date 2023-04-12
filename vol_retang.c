/* Construa um programa que calcule a apresente o valor do volume de
uma caixa retangular usando a fórmula:
VOLUME <- COMPRIMENTO * LARGURA * ALTURA */

#include <stdio.h>

int main(){
    
    float vol,cmp,larg,alt;

    printf("\n Escreva o comprimento: ");
    scanf("%f",&cmp );
    printf("\n Escreva a largura: ");
    scanf("%f",&larg );
    printf("\n Escreva a altura: ");
    scanf("%f",&alt);
    
    vol = cmp*larg*alt;

    printf("\n O volume e: %f", vol);

    return 0;
}
