#include<stdio.h>
void printTable(int a){
    printf("Enter your number : ");
    scanf("%d",&a);
    
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
}
void main(){
    int x;
    printTable(x);
}