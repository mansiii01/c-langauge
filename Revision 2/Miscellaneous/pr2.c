#include<stdio.h>
main(){
    int number, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    int original = number;
    int temp = original;

    while (temp > 0)
	{
        temp /= 10;
        digits++;
    }

    temp = original;

    while (temp > 0)
	{
        int digit = temp % 10;
        int product = 1;

        for (int i = 0; i < digits; i++)
		{
            product *= digit;
        }

        sum += product;
        temp /= 10;
    }

    if (sum == original)
	{
        printf("%d is Armstrong Number...", original);
    }
	else
	{
        printf("%d is not Armstrong Number...", original);
    }
}