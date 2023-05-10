#include <stdio.h>

int ehTriangulo(int a, int b, int c);         
int ehIsosceles(int a, int b, int c);         
int ehEquilatero(int a, int b, int c);          
int ehEscaleno(int a, int b, int c);
void invalid();

int main() {
    
    int l1, l2, l3;

    printf("Escreva o primeiro lado do triangulo: \n");
    scanf("%d",&l1);
    printf("Escreva o segundo lado do triangulo: \n");
    scanf("%d",&l2);
    printf("Escreva o terceiro lado do triangulo: \n");
    scanf("%d",&l3);

    if (ehTriangulo(l1, l2, l3) == 0)
    {
        invalid();
    }
    else
    {
        if (ehEquilatero(l1, l2, l3))
        {
            printf("É Um triangulo Equilatero!\n");
        }
        else{
            if (ehIsosceles(l1, l2, l3))
            {
                printf("É Um triangulo Isosceles!\n");
            }
            else{
                printf("É Um triangulo escaleno!\n");
            }
        }
    }
    
    return 0;
}

int ehTriangulo(int a, int b, int c) {
    
    int resposta = 0;

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        resposta = 1;
    }
    
    return resposta;
}

int ehIsosceles(int a, int b, int c) {
    
    int resposta = 0;

    if ((a == b) || (a == c) || (b == c)){
        resposta = 1;
    }

    return resposta;
}

int ehEquilatero(int a, int b, int c) {
    
    return (a == b) && (b == c);
}

int ehEscaleno(int a, int b, int c) {
    
    int resposta = 0;

    if ((a != b) && (b != c) && (a != c)){
        resposta = 1;
    }

    return resposta;
}

void invalid() {

    printf("DADOS INVALIDOS!!\n");

}