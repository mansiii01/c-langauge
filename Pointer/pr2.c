#include<stdio.h>
min(int *a,int *b){

    if (*a<*b)
    {
        printf("min : %d",*a);
    }
    else{
        printf("min : %d",*b);
    }
    



}
main(){

    int a,b;
    printf("Enter your value : ");
    scanf("%d",&a);
    printf("Enter your value : ");
    scanf("%d",&b);
    min(&a,&b);

}