#include <stdio.h>

int main(){
    int details;
    
    //name
    char name[100] = " ";
    printf("Enter you name :\n");
    scanf("%s",name);
    
    //destination
    char destination[100] = " ";
    
    int km;
    char transportation;
    int trainfare;
    int busfare;
    int flightfare;
    int petrolprice;
    int fasttagprice;
    int motorbikefare;
    int carfare;
    int petrolprice_c;
    int fasttagprice_c;
    
    printf("TRIP \n");
    printf("%s enter details about trip \n",name);
    printf("1.transportation \n");
    printf("2.accomodation \n");
    printf("3.food \n");
    printf("4.decision \n");
    scanf("%d",&details);
    
    switch(details){
    case 1:
    printf("enter destination \n");
    scanf("%s",destination);
    printf("enter distance from source \n");
    scanf("%d", &km);
    printf("choose transportation \n");
    printf("T.TRAIN \n");
    printf("B. BUS \n");
    printf("F.FLIGHT \n");
    printf("M. MOTORBIKE \n");
    printf("C. CAR \n");
    scanf(" %c", &transportation);
    
        switch(transportation){
            
            case 'T':
            printf("enter train fare \n");
            scanf("%d", &trainfare);
            break;
            
            case 'B':
            printf("enter bus fare \n");
            scanf("%d", &busfare);
            break;
            
            case 'F':
            printf("enter flight fare \n");
            scanf("%d",&flightfare);
            break;
            
            case 'M':
            printf("write details about motorbike fare \n");
            printf("enter petrol price \n");
            scanf("%d",&petrolprice);
            printf("enter fasttag price \n");
            scanf("%d", &fasttagprice);
            motorbikefare=petrolprice+fasttagprice;
            printf("motorbike fare: %d",motorbikefare);
            break;
            
            
            case 'C':
            printf("write details about car fare \n");
            printf("enter petrol price \n");
            scanf("%d",&petrolprice_c);
            printf("enter fasttag price \n");
            scanf("%d", &fasttagprice_c);
            carfare=petrolprice_c+fasttagprice_c;
            printf("car fare: %d",carfare);
            break;
            
        }
        break;
        int days;
        int accom;
        case 2:
        
        printf("how many days you are staying \n");
        scanf("%d",&days);
        printf("details about accomodation \n");
        printf("1.Home stay \n");
        printf("2.hotels \n");
        printf("3.guest house \n");
        scanf("%d",&accom);
        
            switch(accom){
                int homestayp;
                int homestayprice;
                case 1:
                printf("enter room price per day \n");
                scanf("%d",&homestayp);
                homestayprice = days* homestayp;
                printf("home stay price: %d", homestayprice);
                break;
                
                int hotelp;
                int hotelprice;
                case 2:
                printf("enter room price per day \n");
                scanf("%d",&hotelp);
                hotelprice = days* hotelp;
                printf("hotel price: %d", hotelprice);
                break;
                
                int guesthousep;
                int guesthouseprice;
                case 3:
                printf("enter room price per day \n");
                scanf("%d",&guesthousep);
                guesthouseprice = days* guesthousep;
                printf("guesthouse price: %d", guesthouseprice);
                break;
                
            }
            break;
        
        
    }
    return 0;
}


