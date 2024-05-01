#include<stdio.h>
main(){
    int fact_num, fact=1;
    printf("Enter any Number : ");
    scanf("%d",&fact_num);
    for(int i=1; i<=fact_num; i++)
    {
    	fact *= i;
	}
	printf("Factorial is : %d",fact);

}