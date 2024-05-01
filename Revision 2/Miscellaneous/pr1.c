#include<stdio.h>
main(){
     int sum_num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &sum_num);

    while (sum_num != 0) 
	{
        digit = sum_num % 10;
        sum += digit;
        sum_num /= 10;
    }

    printf("Sum Of All Digits is : %d", sum);
}