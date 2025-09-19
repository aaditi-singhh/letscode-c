#include <stdio.h>

int main(){
    int details;
    char destination[100] = " " ;
    int km;
    char transportation;
    
    int trainfare;
    int busfare;
    
    printf("TRIP \n");
    printf("enter details about trip \n");
    printf("1.transportation \n");
    printf("2.accomodation \n");
    printf("3.food \n");
    printf("4.decision \n");
    
    scanf("%d",&details);
    
    switch(details){
    
    case 1:
    printf("enter destination \n");
    scanf("%s",&destination);
    
    
    printf("enter distance from source \n");
    scanf("%d", &km);
    
    printf("choose transportation \n");
    printf("T.TRAIN \n");
    printf("B. BUS \n");
    printf("F.FLIGHT \n");
    printf("M. MOTORBIKE \n");
    printf("C. CAR \n");
    scanf("%c", &transportation);
    
    
    
   
  

    
    
    
    }
    

    return 0;
}