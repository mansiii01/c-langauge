#include <stdio.h>

void reverse(int arr[], int a)
{
    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int sum1(int arr[], int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int a;

    printf("Enter the size: ");
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
      printf("Enter array's element= ");
      scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Reverse array: ");
    reverse(arr, a);

    int sum = sum1(arr, a);
    printf("Sum: %d\n", sum);

    return 0;
}