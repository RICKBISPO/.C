#include <stdio.h>
#include <string.h>
 
int main() {
 
    int power, nmr;
    char name[15], y, n;

    y = 'Y';
    n = 'N';

    scanf("%d",&nmr);

    for (int i = 0; i < nmr; i++)
    {
        scanf("%s %d", name, &power);
        
        if (strcmp(name, "Thor") == 0)
        {
            printf("%c\n",y);
        }
        else
        {
            printf("%c\n",n);
        }
    }
    
    return 0;
}