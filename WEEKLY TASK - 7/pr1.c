#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
 
    if(num == 0){
        printf("zero");
    }
    else if(num < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Positive");
    }
     
}