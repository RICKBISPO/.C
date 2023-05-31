#include <stdio.h>

int main() {

    int j, i;
    
    j = 60;
    i= 1;

    printf("I=%d J=%d\n",i, j);

    while (j > 0)
    {
        j -= 5;
        i += 3;
        printf("I=%d J=%d\n",i, j);
    }
    
    return 0;
}
