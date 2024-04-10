#include <stdio.h>
int calculateSumOfSquares(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++){
    
        if(i%2==0){
           sum += (i * i); 
        }
        
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    
    printf("%d",calculateSumOfSquares(n));
    return 0;
}