#include <stdio.h>
 
int main()
{
    int A, B, C;
 
    printf("Enter the numbers A : ");
    scanf("%d", &A);
    printf("Enter the numbers B : ");
    scanf("%d", &B);
    printf("Enter the numbers C : ");
    scanf("%d", &C);
 
    // finding max using compound expressions
    if (A >= B && A >= C)
        printf("%d is the largest number.", A);
 
    else if (B >= A && B >= C)
        printf("%d is the largest number.", B);
 
    else
        printf("%d is the largest number.", C);
 
}