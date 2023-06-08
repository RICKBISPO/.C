#include <stdio.h>
#define A 100

int main() {
    
    float x[A];
    int i;

    for (i = 0; i < A; i++)
    {
        scanf("%f",&x[i]);
    }

    for (i = 0; i < A; i++)
    {
        if (x[i] <= 10)
        {
            printf("A[%d] = %.1f\n",i, x[i]);
        }
    }
    
    return 0;
}
