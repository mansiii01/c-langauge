#include<stdio.h>
main(){
    int i=0,num;
    printf("enter your number : ");
    scanf("%d",&num);

    do{
        printf("%d\n",i);
        i+=2;
    } while (i<=num);
    
}