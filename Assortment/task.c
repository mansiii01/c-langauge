#include<stdio.h>
main(){

    // task1

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
            printf("enter a value : ");
            scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d\n",arr[i]);
        }
        
    }

    // task2

    int arr[3][3],max=arr[3][3];


     for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("enter a value : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
          printf("%d",max);

    
    // task3

    int arr[3][3];
    
     for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("enter a value : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
   printf("The transpose matrix of an array:\n");
    for(int i=0; i<3;i++){

     for (int j = 0; j < 3; j++)
    {
     printf("%d",arr[j][i]);

    }
    printf("\n");
    }

    // task4

    int arr[2][3];
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=2; j++)
        {
            printf("Enter Value Elements : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<=1; i++)
    {
        int sum=0;
        for(int j=0; j<=2; j++)
        {
            sum += arr[i][j];
        }
        printf("\nSum Of %d Rows is : %d",i,sum);
    }
    printf("\n");

    


}