#include<stdio.h>
main(){
    // even number+mul

     int arr[5],even=1;

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value : ");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even *= arr[i];
        }
        
    }
    printf("Even num's multiplication is  : %d",even);
    
    
}