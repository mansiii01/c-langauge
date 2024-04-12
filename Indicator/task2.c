#include<stdio.h>
int swap(int *a1,int *b1,int *c1){
    int *s;
    
    s = *a1;
    *a1 = *b1;
    *b1 = *c1;
    *c1 = s;
    
    printf("%d\n%d\n%d",*a1,*b1,*c1);

}
int main(){

    int a,b,c;
    printf("Enter your value : ");
    scanf("%d",&a);
    printf("Enter your value : ");
    scanf("%d",&b);
    printf("Enter your value : ");
    scanf("%d",&c);
    swap(&a,&b,&c);

}