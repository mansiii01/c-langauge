#include <stdio.h>

int main()
{
    
    float principal, rate, compound_Interest, finalAmount;
    int years;
    
    printf("Enter Principal Amount : ");
    scanf("%f",&principal);
    printf("Enter Annual Interest Rate (in percentage) : ");
    scanf("%f",&rate);
    printf("Enter Time (in Years) : ");
    scanf("%d",&years);
    
    rate /= 100;

    finalAmount = principal;

    for (int i = 0; i < years; i++)
    {
        finalAmount += finalAmount * rate;
    }

    compound_Interest = finalAmount - principal;

    printf("Compound Interest : %0.2f",compound_Interest);

}