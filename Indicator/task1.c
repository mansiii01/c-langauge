#include<stdio.h>
int cube(int *a){
    printf("cube : %d",a*a*a);
}
int main(){
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);

    cube(&a);
}