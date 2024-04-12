#include<stdio.h>
max(int *a,int *b){

    if (*a>*b)
    {
        printf("max : %d",*a);
    }
    else{
        printf("max : %d",*b);
    }
    



}
main(){

    int a,b;
    printf("Enter your value : ");
    scanf("%d",&a);
    printf("Enter your value : ");
    scanf("%d",&b);
    max(&a,&b);

}