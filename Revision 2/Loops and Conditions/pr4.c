#include<stdio.h>
main(){
    int year;
    printf("Enter your year : ");
    scanf("%d",&year);
    
    if(year%4 == 0){
        printf("%d is lbeap year",year);
    }else{
        printf("%d is not leap year",year);
    }
}