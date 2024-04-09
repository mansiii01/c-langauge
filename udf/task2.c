#include<stdio.h>
void multiplyNumbers()(int a, int b){
    printf("enter you number : ");
    scanf("%d",&a);
    printf("enter you number : ");
    scanf("%d",&b); 
    
    printf("multiplication of two number : %d",a*b);
}
void main(){
    int x,y;
    multiplyNumbers()(x,y);
}