#include <stdio.h>
#define N 1000

int main() {
    
    int n[N], t;
    int i, ii;

    ii = 0;

    scanf("%d",&t);

    for (i = 0; i < N; i++)
    {
        n[i] = ii;
        ii++;

        if (ii == t)
        {
           ii = 0;
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("N[%d] = %d\n",i, n[i]);
    }

    return 0;
}
