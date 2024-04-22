#include <stdio.h>
 
main()
{
    int s1,s2,s3;
    printf("Enter marks of maths : ");
    scanf("%d",&s1);
    printf("Enter marks of sci : ");
    scanf("%d",&s2);
    printf("Enter marks of ss : ");
    scanf("%d",&s3);
    
    if(s1>40 && s2>40 && s3>40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
 
}