#include<stdio.h>
main(){
    
    int i , table;
    printf("Enter your number : ");
    scanf("%d",&table);

    for (i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d",table,i,table*i);
    }
       
}