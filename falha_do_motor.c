#include <stdio.h>
 
int main() {
 
    int rpm[100], rpm_fixa;
    int velocidades;
    int queda = 0,  i = 1;

    scanf("%d",&velocidades);

    for (int i = 0; i < velocidades; i++)
    {
        scanf("%d",&rpm[i]);
    }
    
    rpm_fixa = rpm[0];

    while (i < velocidades && queda == 0)
    {
        if (rpm[i] > rpm_fixa)
        {
           rpm_fixa = rpm[i];
        }

        if (rpm[i] < rpm_fixa)
        {
            queda = i+1;
        }

        i++;
    }
    
    printf("%d\n",queda);
    
    return 0;
}