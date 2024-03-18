#include<stdio.h>
main(){
    int start_leap, end_leap;
    printf("Enter Starting Leap Year : ");
    scanf("%d",&start_leap);
    printf("Enter Ending Leap Year : ");
    scanf("%d",&end_leap);
    
    while(start_leap<=end_leap)
    {
        if(start_leap%4==0)
        {
            printf("%d  ",start_leap);
        }
        start_leap++;
    }
}