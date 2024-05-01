// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int large_size, large_arr[large_size];
    printf("Enter Array Size : ");
    scanf("%d",&large_size);
    
    for(int i=0; i<large_size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&large_arr[i]);
    }

    int largest = large_arr[0]; 
    int secondLargest = large_arr[1];

    for (int i=0; i<large_size; i++)
    {
        if (large_arr[i] > largest)
        {
        	secondLargest = largest;
            largest = large_arr[i];
        } 
        else if (large_arr[i] > secondLargest && large_arr[i] != largest)
        {
            secondLargest = large_arr[i];
        }
    }
    printf("The second largest element is %d.\n", secondLargest);


}