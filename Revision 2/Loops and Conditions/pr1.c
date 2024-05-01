#include<stdio.h>
main(){
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    
    if(num%2 == 0){
        printf("%d is even",num);
    }else{
        printf("%d isb odd",num);
    }
}