// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i,j,k;
    int row_1, col_1, row_2, col_2;
	printf("-----Enter First Array Values-----\n");
    printf("Enter Row : ");
    scanf("%d",&row_1);
    printf("Enter Column : ");
    scanf("%d",&col_1);
    
    int arr_1[row_1][col_1];
    
    for(i=0; i<row_1; i++)
    {
        for(j=0; j<col_1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr_1[i][j]);
        }
    }
    
    printf("\n-----Enter Second Array Values-----\n");
    printf("Enter Row : ");
    scanf("%d",&row_2);
    printf("Enter Column : ");
    scanf("%d",&col_2);
    
    int arr_2[row_2][col_2];
    
    for(i=0; i<row_2; i++)
    {
        for(j=0; j<col_2; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr_2[i][j]);
        }
    }
    printf("\n-----First Array-----\n");
    for(i=0; i<row_1; i++)
    {
        for(j=0; j<col_1; j++)
        {
            printf("%3d",arr_1[i][j]);
        }
        printf("\n");
    }
    printf("\n-----Second Array-----\n");
    for(i=0; i<row_2; i++)
    {
        for(j=0; j<col_2; j++)
        {
            printf("%3d",arr_2[i][j]);
        }
        printf("\n");
    }

    if (col_1 != row_2)
	{
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int result[10][10];

    for (i = 0; i < row_1; i++) 
	{
        for (j = 0; j < col_2; j++) 
		{
            result[i][j] = 0; 
        }
    }

    for (i = 0; i < row_1; i++) 
	{
        for (j = 0; j < col_2; j++) 
		{
            for (k = 0; k < col_1; k++) 
			{
                result[i][j] += arr_1[i][k] * arr_2[k][j];
            }
        }
    }
 
    printf("\n-----Multiply Two Matrices-----\n");
    for (i = 0; i < row_1; i++) 
    {
        for (j = 0; j < col_2; j++) 
	{
            printf("%3d", result[i][j]);
        }
    }


}