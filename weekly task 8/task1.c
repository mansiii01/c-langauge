#include <stdio.h>

int main() {
    
    int n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

   
    for(int i = 1; i <= n; i++) {
        sum += i;  
    }

    printf("The sum of first %d natural numbers is: %d\n", n, sum);
 
}