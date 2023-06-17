#include <stdio.h>
#include <string.h>
 
int main() {
 
    char texto[500];

    fgets(texto, 500, stdin);

    if (strlen(texto) <= 141)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }

    return 0;
}