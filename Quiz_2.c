#include <stdio.h>

int main(){
    char name[10];
    int tall;
    printf("Enter your name : ");
    scanf("%s", name);
    printf("How tall are you : ");
    scanf("%d", &tall);

    if(tall > 160){
        printf("Welcome to AI Shop");
    }else{
        printf("?You shall not pass");
    }
}

