#include<stdio.h>
main(){
    int sqrt_num, sqrt;
    printf("Enter Any Number : ");
    scanf("%d",&sqrt_num);

    for(int i = 0;  i * i <= sqrt_num; i++)
	{
        sqrt = i;
    }

    printf("square root is : %d", sqrt);
}