#include <stdio.h>

int main(){
    int details;
        int total_transport = 0, total_accom = 0, total_food = 0, expected_price = 0;
    
    //name
    char name[100] = " ";
    printf("Enter you name :\n");
    scanf("%s",name);
    
    //destination
    char destination[100] = " ";
    printf("enter destination \n");
    scanf("%s",destination);
    
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
            
            case 'T' :case 't' :
            printf("enter train fare \n");
            scanf("%d", &trainfare);
            total_transport = trainfare;
            break;
            
            case 'B':case 'b':
            printf("enter bus fare \n");
            scanf("%d", &busfare);
            total_transport = busfare;
            break;
            
            case 'F':case 'f':
            printf("enter flight fare \n");
            scanf("%d",&flightfare);
            total_transport = flightfare;
            break;
            
            case 'M':case 'm':
            printf("write details about motorbike fare \n");
            printf("enter petrol price \n");
            scanf("%d",&petrolprice);
            printf("enter fasttag price \n");
            scanf("%d", &fasttagprice);
            motorbikefare=km*petrolprice+fasttagprice;
            printf("motorbike fare: %d",motorbikefare);
            total_transport = motorbikefare;
            break;
            
            
            case 'C': case 'c':
            printf("write details about car fare \n");
            printf("enter petrol price \n");
            scanf("%d",&petrolprice_c);
            printf("enter fasttag price \n");
            scanf("%d", &fasttagprice_c);
            carfare=km*petrolprice_c+fasttagprice_c;
            printf("car fare: %d",carfare);
            total_transport = carfare;
            break;
            
        }
        
        int days;
        int accom;
        case 2:
        
      
        printf("details about accomodation \n");
        printf("how many days you are staying \n");
        scanf("%d",&days);
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
                printf("home stay price: %d \n", homestayprice);
                total_accom = homestayprice;
                break;
                
                int hotelp;
                int hotelprice;
                case 2:
                printf("enter room price per day \n");
                scanf("%d",&hotelp);
                hotelprice = days* hotelp;
                printf("hotel price: %d \n", hotelprice);
                total_accom = hotelprice;
                break;
                
                int guesthousep;
                int guesthouseprice;
                case 3:
                printf("enter room price per day \n");
                scanf("%d",&guesthousep);
                guesthouseprice = days* guesthousep;
                printf("guesthouse price: %d \n", guesthouseprice);
                total_accom = guesthouseprice;
                break;
                
            }
            
            int food;
            int dayss;
            int breakfast;
            int lunch;
            int dinner;
            
            case 3:
            printf("how many days you are staying \n");
            scanf("%d",&dayss);
            printf("details about food expenditure \n");
            printf("1.Breakfast \t");
            printf("2.Lunch \t");
            printf("3.dinner");
            scanf("%d",&food);
            
            switch(food){
                case 1:
                printf("enter price for breakfast \n");
                scanf("%d",&breakfast);
                printf("breakfast price is %d",breakfast*dayss);
                total_food = breakfast * dayss;
                break;
                
                case 2:
                printf("enter price for lunch \n");
                scanf("%d",&lunch);
                printf("lunch price is %d",lunch*dayss);
                total_food = lunch * dayss;
                break;
                
                case 3:
                printf("enter price for dinner \n");
                scanf("%d",&dinner);
                printf("dinner is %d",dinner*dayss);
                total_food = dinner * dayss;
                break;
                
            }
            case 4:
            int budget;
            printf("decision \n");
            printf("enter your budget for trip \n");
            scanf("%d",&budget);
            expected_price = total_transport + total_accom + total_food;
            printf("expected price for transporation: %d \n",total_transport);
            printf("expected price for accomodation: %d \n",total_accom);
            printf("expected price for food: %d \n",total_food);
            printf("expected price: %d \n",expected_price);
            
            if(expected_price>budget){
                printf("take loan");
            }
            
            else{
                printf("%s trip is on",destination);
                
            }
        
    }
    return 0;
}





