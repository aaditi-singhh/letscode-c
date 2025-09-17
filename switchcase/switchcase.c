#include <stdio.h>

int main()
{
    int var =2;
    
    switch (var){
        case 1:
        printf("case 1 is matched");
        break;
    
        case 2:
        printf("case 2 is matched");
        break;
        
        default:
        printf("default case");
        break;
    }

    return 0;
}