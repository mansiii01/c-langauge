#include<stdio.h>
main(){
    // odd number

     int arr[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value : ");
        scanf("%d",&arr[i]); 
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d\n",arr[i]);
        }
        
    }
    
}