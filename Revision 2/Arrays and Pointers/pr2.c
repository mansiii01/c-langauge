// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int row, col, sum=0;
    printf("Enter Row : ");
    scanf("%d",&row);
    printf("Enter Column : ");
    scanf("%d",&col);
    
    int arr_sum[row][col];
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr_sum[i][j]);
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum += arr_sum[i][j];
        }
    }
    printf("Sum Of All Number is : %d",sum);
}