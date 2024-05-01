#include<stdio.h>
main(){
    int a,b,c;
    printf("enter a first value : ",a);
    scanf("%d",&a);
    printf("enter a second value : ",b);
    scanf("%d",&b);
    printf("enter a third value : ",c);
    scanf("%d",&c);

    if (a > b)
    {
        if (a > c)
        {
           printf("%d is max",a); 
        }
        else
        {
            printf("%d is max",c);
        }

    }
    else
    {
        if (b > c)
        {
            printf("%d is max",b);
        }
        else
        {
            printf("%d is max",c);
        }

    }

}