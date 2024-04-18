#include<stdio.h>
main(){
    int n,small;
    int arr[n];

    printf("\n Enter the size of array : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Element  %d : ",i);
        scanf("%d",&arr[i]);
    }
    
    small = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
        
    }
    
    printf("\n smallest element in an array is : %d",small);


}