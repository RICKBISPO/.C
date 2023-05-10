#include <stdio.h>

int readInt();
int is_even(int value);
double calculo_media(int n1, int n2, int n3, int n4);

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    double media;

    a = readInt();
    b = readInt();
    c = readInt();
    d = readInt();

    media = calculo_media(a, b, c, d);

    media == 0 ? printf("Não existe valor par.") : printf("MEDIA = %.3lf", media);
    printf("\n\n");

    return 0;
}

double calculo_media(int n1, int n2, int n3, int n4){
    double sum, count;

    sum = 0;
    count = 0;

    if(is_even(n1)){
        sum = sum + n1;
        count = count + 1;
    }

    if(is_even(n2)){
        sum = sum + n2;
        count++;
    }

    if(is_even(n3)){
        sum = sum + n3;
        ++count;
    }

    if(is_even(n4)){
        sum += n4;
        count++;
    }

    if(count != 0){
        return sum / count;
    }else{
        return 0;
    }

}

int is_even(int value) {

    return value % 2 == 0;
}


int readInt() {
    
    int value;

    printf("Digite número inteiro: ");
    scanf("%d", &value);

    return value;
}