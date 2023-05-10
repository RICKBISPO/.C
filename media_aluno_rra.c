#include <stdio.h>

double calculo_notas(int a, int b, int c, int d, int e);

int main() {
    
    int n1, n2, n3, n4, n5;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);

    calculo_notas(n1, n2, n3, n4, n5);

    return 0;
}

double calculo_notas(int a, int b, int c, int d, int e) {

    double media;

    media = (a + b + c + d + e) / 5;

    if (media < 5)
    {
        printf("Reprovado\n");
    }
    else
    {
        if (media >= 5 && media < 7)
        {
            printf("Recuperação\n");
        }
        else 
        {
            printf("Aprovado\n");
        }
    }

    return 0;
}
