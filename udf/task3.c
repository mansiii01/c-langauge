#include<stdio.h>
void divideNumbers(int a, int b){
    printf("enter you number : ");
    scanf("%d",&a);
    printf("enter you number : ");
    scanf("%d",&b); 
    
    int q,r;
    q=a/b;
    r=a%b;
    
    printf("Remiender : %d\n",r);
    
    if(r == 0){
        printf("Quotient : %d\n",q);
    }
}
void main(){
    int x,y;
    divideNumbers(x,y);
}