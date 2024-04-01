#include<stdio.h>
main(){
     int arr[5],sum;

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value : ");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
        
    }
    printf("sum = %d\n",sum);
}