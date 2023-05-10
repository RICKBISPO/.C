#include <stdio.h>

int categoria(int x);

int main() {
    
    int idade;

    printf("Digite a idade do nadador: \n");
    scanf("%d",&idade);

    categoria(idade);

    return 0;
}

int categoria(int x) {

    if(x >= 5 && x <= 7)
    {
        printf("A\n");
    }
    else 
    {
        if (x >= 8 && x <= 10)
        {
            printf("B\n");
        }
        else
        {
            if (x >= 11 && x <= 13)
            {
                printf("C\n");
            }
            else
            {
                if (x >= 14 && x <= 18)
                {   
                    printf("D\n");
                }
                else
                {
                    if (x > 18) 
                    {
                        printf("E\n");
                    }
                    else
                    {
                        printf("IDADE NAO PERMITIDA!!\n");
                    }
                }
            }
        }
    }

    return 0; 
}