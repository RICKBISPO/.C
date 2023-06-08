#include <stdio.h>

int main() {
    
    int i, y[20];

    for (i = 19; i >= 0 ; i--)
    {
        scanf("%d",&y[i]);
    }

    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n",i, y[i]);
    }

    return 0;
}
