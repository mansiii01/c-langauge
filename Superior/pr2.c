#include<stdio.h>
main(){
    int n,arr[a],max;
    max=arr[0];

    printf("Enter size of array : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 0; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    printf("max : %d",max)
    
    
}