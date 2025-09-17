#include <stdio.h>
    int main(){
        
        int category;
        int value;
        
        printf("For fruits select 1 \n For vegies select 2 ");
        scanf("%d",&category);
        
        
        switch(category) {
            case 1:
            printf("For Fruits Choose \n 1:Mango \n 2:Apple \n");
            scanf("%d",&value);
            
                switch(value){
                    case 1:
                    printf("You choosed Mango");
                    break;
                    
                    case 2:
                    printf("You choosed Apple");
                    break;
                }
            break;
        
                
            case 2:
            printf("For vegies Choose \n 1:Potato \n 2:Tomato \n");
            scanf("%d",&value);
            
                switch(value){
                    case 1:
                    printf("You choosed Potato");
                    break;
                    
                    case 2:
                    printf("You choosed Tomato");
                    break;
                }
              break;
        }
    return 0;
    }