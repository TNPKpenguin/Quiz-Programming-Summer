#include <stdio.h>

int main(){
    float x1, x2;
    char symbol;
    printf("Equation : ");
    scanf("%f %c %f", &x1, &symbol, &x2);
    switch(symbol){
        case '+':
            printf("%.f %c %.f = %.2f", x1, symbol, x2, x1+x2);
            break;
        case '-':
            printf("%.f %c %.f = %.2f", x1, symbol, x2, x1-x2);
            break;
        case 'x':
            printf("%.f %c %.f = %.2f", x1, symbol, x2, x1*x2);
            break;
        case '/':
            printf("%.f %c %.f = %.2f", x1, symbol, x2, x1/x2);
            break;
    }
}


