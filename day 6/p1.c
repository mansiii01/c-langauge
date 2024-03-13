#include<stdio.h>
main(){
    int a,b,c;
    printf("enter a first value : ");
    scanf("%d",&a);
    printf("enter a second value : ");
    scanf("%d",&b);
    printf("enter a third value : ");
    scanf("%d",&c);

    (a < b) ? (a < c)? printf("A is minimum") : printf("C is minimum") : (b < c) ? printf("B is minimum") : printf("C is minimum");
}