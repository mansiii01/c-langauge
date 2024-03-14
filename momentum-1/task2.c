#include <stdio.h>

void main()
{
    int unit;
    float a, totalamt, s;

    printf("Enter your total units: ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        a = unit * 0.50;
    }
    else if(unit <= 150)
    {
        a = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        a = 100 + ((unit-150) * 1.20);
    }
    else
    {
        a = 220 + ((unit-250) * 1.50);
    }

    s = a * 0.20;
    totalamt  = a + s;

    printf("Electricity Bill is.. = Rs. %.2f", totalamt);


}
