#include <stdio.h>

double operacao(char op, int x, int y);
double divs(int a, int b);
int soma(int a, int b);
int subtr(int a, int b);
int multpl(int a, int b);
void error();

int main() {
    
    int num1, num2;
    char opr;

    printf("Digire um operador: \n");
    scanf("%c",&opr);
    printf("Digire um nmr: \n");
    scanf("%d",&num1);
    printf("Digire outro nmr: \n");
    scanf("%d",&num2);

    operacao(opr, num1, num2);

    return 0;
}

double operacao(char op, int x, int y) {

    switch (op)
    {
        case ('+'): soma(x, y); 
        break;
        case ('-'): subtr(x, y); 
        break;
        case ('*'): multpl(x, y); 
        break;
        case ('/'): divs(x, y); 
        break;

        default: error();
        break;
    }

    return 0;
}

int soma(int a, int b) {
    
    int sm;

    sm = a + b;

    printf("O resultado e: %d\n", sm);
    
    return 0;
}

int subtr(int a, int b){
    
    int sb;

    sb = a - b;

    printf("O resultado e: %d\n", sb);
    
    return 0;
}

int multpl(int a, int b){
    
    int mlt;

    mlt = a * b;

    printf("O resultado e: %d\n", mlt);
    
    return 0;
}

double divs(int a, int b){
    
    double dv;

    dv = a / b;

    printf("O resultado e: %0.2lf\n", dv);
    
    return 0;
}

void error(){
    
    printf("UTILIZE UM OPERADOR VALIDO (+,-,*,/) !!!!!\n");

}

