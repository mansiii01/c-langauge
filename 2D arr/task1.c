#include <stdio.h>
main()
{
    int sum;
    float avr;
    int arr[3][3] = {
        {2, 4, 1},
        {3, 5, 4},
        {8, 2, 6}};

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {

            printf("%d", arr[i][j]);
            sum += arr[i][j];
        }

        printf("\n");

    }

    printf("%d\n",sum);
    avr=sum/9;
    printf("%f",avr);


}