#include <stdio.h>

int main() {

    float lmt_x, lmt_y;
    float j, i;

    i = 0;
    j = 1;

    while (i < 2.2)
    {
        lmt_x = i - 0.100;
        lmt_y = i + 0.100;

        if ((int)i>lmt_x && (int)i<lmt_y)
        { 
            printf("I=%.0f J=%.0f\n",i, j);
            printf("I=%.0f J=%.0f\n",i, j+1);
            printf("I=%.0f J=%.0f\n",i, j+2);

        }
        else
        {
            printf("I=%.1f J=%.1f\n",i, j);
            printf("I=%.1f J=%.1f\n",i, j+1);
            printf("I=%.1f J=%.1f\n",i, j+2);
        }
 
        i += 0.2;
        j += 0.2;
    }
    
    return 0;
}
