#include <stdio.h>
#include <string.h>

int checkPass(char master[] ,char password[]);

int main(){
    char alphabet_small[26] = "abcdefghijklmnopqrstuvwxyz";
    char alphabet_big[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char number[10] = "0123456789";
    char extra[8] = "!@#$&*_";
    char password[13];
    int n_condition = 0;
    
    printf("Enter your password : ");
    scanf("%s", password);
    
    if(strlen(password) >= 6 && strlen(password) <= 12){
        n_condition += checkPass(alphabet_big, password);
        n_condition += checkPass(alphabet_small, password);
        n_condition += checkPass(number, password);
        n_condition += checkPass(extra, password);
    }else{
        printf("Unsecure");
    }
    
    if(n_condition == 4){
        printf("Secure");
    }else{
        printf("Unsecure");
    }
}

int checkPass(char master[] ,char password[]){
    int i, j;
    for(i=0; i<strlen(password); i++){
        for(j=0; j<strlen(master); j++){
            if(password[i] == master[j]){
                return 1;
            }
        }        
    }
}


