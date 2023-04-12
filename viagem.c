/* Alan e Cristiano irão viajar para no fim de semana. Sabe-se que seu
automóvel faz em média 12 quilômetros por litro de combustível. 
Eles desejam saber quantos litros de combustível
gastarão na viagem */ 

#include <stdio.h>

int main(){

    float tmp,vm,dist,ltrs,ltrsp;
    
    ltrsp = 12; //Manutenibilidade

    printf("\n Escreva o tempo de viagem em horas: ");
    scanf("%f",&tmp );
    printf("\n Escreva a velocidade media em km/h: ");
    scanf("%f",&vm );

    dist = vm*tmp;
    ltrs = dist/ltrsp;

    printf("\n A velocidade media e: %f", vm);
    printf("\n O tempo de viagem e: %f", tmp);
    printf("\n A distancia percorrida e: %f", dist);
    printf("\n O total de litros gastos e: %.01f", ltrs);

    return 0;
}
