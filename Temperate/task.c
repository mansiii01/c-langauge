#include<stdio.h>
main(){

    // task1

    char alpa='a';
    do
    {
        printf("%c\n",alpa);
        alpa+=4;
    } while (alpa<='z');


    // task2

    {  
        int num;  
        int count=0;  
        printf("Enter a number : ");  
        scanf("%d",&num);  
        while(num!=0)  
        {  
            num=num/10;  
            count++;    
        }  
            
        printf("This is count %d \n",count);  
    }

    // task3
  
    {  
        int s,sum=0,a,b; 
        printf("enter value of s: ");
        scanf("%d",&s);
        b=s%10;
        while (s >=10)
        {
            s=s/10;
        }
        a=s;
        sum = a+b;
        printf("sum of first and last num =%d",sum);
    
   
}  
    
}