#include<stdio.h>
swap(int *a1,int *b1){
    int *s;
    
    s = *a1;
    *a1 = *b1;
    *b1 = s;
    
    printf("%d\n%d",*a1,*b1);

}
main(){

    int a,b;
    printf("Enter your value : ");
    scanf("%d",&a);
    printf("Enter your value : ");
    scanf("%d",&b);
    swap(&a,&b);

}