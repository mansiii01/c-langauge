#include<stdio.h>
main(){
 int arr[5],max=arr[0];
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=4; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("Maximum Number is : %d",max);
 

}