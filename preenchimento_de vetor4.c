#include <stdio.h>
#define N1 15
#define N2 5

int main() {

    int x, imp[N2], par[N2];
    int i, i_imp, i_par;

    i_imp = 0;
    i_par = 0;

    for (i = 0; i < N1; i++)
    {
        scanf("%d",&x);
    
        if (x % 2 == 0)
        {
            par[i_par] = x;
            i_par++;

            if (i_par == N2)
            {
                for (int ii = 0; ii < N2; ii++)
                {
                    printf("par[%d] = %d\n", ii, par[ii]);
                }
                i_par = 0;
            }
        }
        else 
        {
            imp[i_imp] = x;
            i_imp++;

            if (i_imp == N2)
            {
                for (int ii = 0; ii < N2; ii++)
                {
                    printf("impar[%d] = %d\n", ii, imp[ii]);
                }
                i_imp = 0;
            }
        }

    }

    for (i = 0; i < i_imp; i++)
    {
        printf("impar[%d] = %d\n", i, imp[i]);
    }

    for (i = 0; i < i_par; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
