#include <stdio.h>
    int main(){
        
        int x,y;
        char operator;
        
        printf("HELLO GUYSS!! LETS CALCULATE \n");
        
        printf("enter a operator (+,-,*,/) \n");
        scanf("%c" , &operator);
        
        printf("enter two numbers \n");
        scanf("%d %d",&x,&y);
        
        switch (operator) {
        
        case '+' :
        printf("Result is: %d + %d = %d \n", x,y,x+y);
        
        
        case '-' :
        printf("Result is: %d - %d = %d \n" , x,y,x-y);
        
        
        case '*' :
        printf("Result is: %d * %d = %d \n" , x,y,x*y);
        break;
        
        case '/' :
        printf("Result is: %d / %d = %d \n" , x,y,x/y);
        break;
        
        default:
        printf("invalid input");
        break;
           
        }
        return 0;
    }
    