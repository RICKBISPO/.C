/* Crie um programa que pegue a nota de 0 a 100 de um aluno, 
depois aplique a devida menção */

#include <stdio.h>

int main()
{
    
    int nota;

    scanf("%d",&nota);

    if (nota >= 90)
    {
        printf("MB\n");
    }
    else if(nota >= 80)
    {
        printf("B+\n");
    }
    else if(nota >= 70)
    {
        printf("B\n");
    }
    else if(nota >= 60)
    {
        printf("R+\n");
    }
    else if(nota >= 50)
    {
        printf("R\n");
    }
    else
    {
        printf("REPROVADO!!\n");
    }
    
    
    return 0;
}
