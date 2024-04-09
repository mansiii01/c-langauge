#include<stdio.h>
void addNumbers(int a, int b){
    printf("enter you number : ");
    scanf("%d",&a);
    printf("enter you number : ");
    scanf("%d",&b); 
    
    printf("Sum of two number : %d",a+b);
}
void main(){
    int x,y;
    addNumbers(x,y);
}