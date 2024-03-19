#include<stdio.h>
main(){
    int num, fact=1;
    printf("Enter your number : ");
    scanf("%d",&num);

    for (int i = 0; i <= num; i++)
    {
        fact *= i;
    }
    printf("%d",fact);
    

}