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

    int row, col, i, j;

    printf("Enter Size of Array :");
    scanf("%d", &row);
    col = row;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Enter Value of Array :");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    int r, sum = 0, c, sumc = 0;

    printf("Enter Number of row :");
    scanf("%d", &r);

    for (int i = r; i < row; i++)
    {
        if (i == r + 1)
        {
            break;
        }
        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d\n", sum);

    printf("Enter Number of col :");
    scanf("%d", &c);

    for (int i = 0; i < row; i++)
    {
        for (int j = c; j < row; j++)
        {
            if (j == c + 1)
            {
                break;
            }
            sumc += arr[i][j];
        }
    }
    printf("%d\n", sumc);
    


}