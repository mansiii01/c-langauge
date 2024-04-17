#include <stdio.h>
#include <string.h>
    struct car{
        int car_id,car_year,car_mileage;
        char car_company[100],car_model[100],car_color[50],car_price[200];
        
    }c[100];

void main(){
    for(int i=0;i<3;i++){
        printf("Enter car id : ");
        scanf("%d",&c[i].car_id);
        
        printf("Enter car company name : ");
        scanf("%s",&c[i].car_company);
        
        printf("Enter car model name : ");
        scanf("%s",&c[i].car_model);
        
        printf("Enter car year : ");
        scanf("%d",&c[i].car_year);
        
        printf("Enter car color : ");
        scanf("%s",&c[i].car_color);
        
        printf("Enter car mileage : ");
        scanf("%d",&c[i].car_mileage);
        
        printf("\n");
        
    }
    
    for(int i=0;i<3;i++){
        printf("%d\n",c[i].car_id);
        printf("%s\n",c[i].car_company);
        printf("%s\n",c[i].car_model);
        printf("%d\n",c[i].car_year);
        printf("%s\n",c[i].car_color);
        printf("%d\n",c[i].car_mileage);
    }


}