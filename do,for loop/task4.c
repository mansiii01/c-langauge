#include<stdio.h>
main(){
    int f=0,s=1,n,num;
    printf("enter your number : ");
    scanf("%d",&num);
    
    for (int i = 0; i <= num; i++)
    {
        printf("%d\n",f);
        n = f+s;
        f = s;
        s = n;
    }
    
}