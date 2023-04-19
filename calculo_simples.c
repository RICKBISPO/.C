/* Neste problema, deve-se ler o código de uma peça 1, 
o número de peças 1, o valor unitário de cada peça 1, 
o código de uma peça 2, o número de peças 2 
e o valor unitário de cada peça 2. 
Após, calcule e mostre o valor a ser pago. */

#include <stdio.h>
 
int main() {
 
    int codigo_pc1, codigo_pc2, num_pc1, num_pc2;
    float vl_pc1, vl_pc2, vl_a_pagar;

    scanf("%d %d %f",&codigo_pc1, &num_pc1, &vl_pc1);
    scanf("%d %d %f",&codigo_pc2, &num_pc2, &vl_pc2);
  
    vl_a_pagar = (num_pc1*vl_pc1) + (num_pc2*vl_pc2);

    printf("VALOR A PAGAR: R$ %0.2f\n",vl_a_pagar);

    return 0;
}