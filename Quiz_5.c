#include <stdio.h>

int main(){
    int arr[5], target, count, count2;
    for(count=0; count<5; count++){
        printf("Enter Array[%d] : ", count);
        scanf("%d", &arr[count]);
    }
    
    printf("\nEnter your target : ");
    scanf("%d", &target);
    
    printf("\nResult\n");
    
    for(count=0; count<4; count++){
        for(count2=count+1; count2<5; count2++){
            if(arr[count] + arr[count2] == target){
                printf("%d + %d\n = %d", arr[count], arr[count2], target);   
            }
        }
    }
}


