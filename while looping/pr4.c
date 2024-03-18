#include<stdio.h>
main(){
    int i=1,a;
    
    printf("Enter your value  : ");
    scanf("%d",&a);

    while (a>=i)
    {
        if (a%2!=0){
        
            printf("%d  ",a);
        }
        a--;
    }
}