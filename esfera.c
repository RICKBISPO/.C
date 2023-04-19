/* Faça um programa que 
calcule e mostre o volume de uma esfera 
sendo fornecido o valor de seu raio (R). 
A fórmula para calcular o volume é: 
(4/3) * pi * R3. 
Considere (atribua) para pi o valor 3.14159

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), 
pois algumas linguagens (dentre elas o C++), 
assumem que o resultado da divisão entre dois inteiros é outro inteiro */

#include <stdio.h>
 
int main() {
 
    double raio, pi, volume;

    pi = 3.14159;

    scanf("%lf",&raio);

    volume = (4.0/3) * pi * (raio*raio*raio);

    printf("VOLUME = %0.3lf\n",volume);

    return 0;
}