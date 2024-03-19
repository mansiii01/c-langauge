#include<stdio.h>
int main(){
    int sum=0, num;
    printf("Enter your number : ");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        sum += i;
    }
    printf("%d\n",sum);
}