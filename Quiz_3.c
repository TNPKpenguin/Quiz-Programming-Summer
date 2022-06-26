#include <stdio.h>
#include <math.h>

int main(){
    int X1, Y1, X2, Y2;
    printf("Enter X1 Y1 : ");
    scanf("%d %d", &X1, &Y1);
    printf("Enter X2 Y2 : ");
    scanf("%d %d", &X2, &Y2);
    
    printf("%.2f", sqrt((X2 - X1) + (Y2 - Y1)));
}



