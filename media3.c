#include <stdio.h>

float media_principal(float n1, float n2, float n3, float n4);
float media_exame(float mavrg, float nexam);

int main() {
    
    float N1, N2, N3, N4, Nexam;
    float main_average;

    scanf("%f",&N1);
    scanf("%f",&N2);
    scanf("%f",&N3);
    scanf("%f",&N4);

    main_average = media_principal(N1, N2, N3, N4);

    if (main_average >= 7.0)
    {
        printf("Media: %.1f\n",main_average);
        printf("Aluno aprovado.\n");
    }
    else
    {
        if (main_average < 5.0)
        {
            printf("Media: %.1f\n",main_average);
            printf("Aluno reprovado.\n");
        }
        else
        {
            if (main_average >=  5.0 && main_average <=  6.9)
            {
                printf("Media: %0.1f\n",main_average);
                printf("Aluno em exame.\n");
                scanf("%f",&Nexam);
                printf("Nota do exame: %.1f\n",Nexam);
                media_exame(main_average, Nexam);
            }
        }
    }
    
    

    return 0;
}

float media_principal(float n1, float n2, float n3, float n4) {

    float mp;

    mp = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    return mp;
}

float media_exame(float mavrg, float nexam) {

    float mf;

    mf = (mavrg + nexam) / 2;

    if (mf >= 5.0)
    {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n",mf);
    }
    else
    {
        if (mf <= 4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",mf);
        }
    }
    
    return 0;
}
