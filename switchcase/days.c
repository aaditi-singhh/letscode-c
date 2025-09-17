#include <stdio.h>
    int main(){
        
    int day;
    printf("enter a number between 1 to 4 \n");
    scanf("%d",&day);
    
    switch (day) {
        case 1:
        printf("monday");
        break;
        
        case 2:
        printf("tuesday");
        break;
        
        case 3:
        printf("wednesday");
        break;
        
        case 4:
        printf("thursday");
        break;
        
        default:
        printf("invalid input");
        break;
    
    }   
    return 0;
    }