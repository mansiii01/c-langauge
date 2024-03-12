#include <stdio.h>
int main(){
    int a,b,c,d;

    printf("Enter The number a=");
    scanf("%d",&a);

     printf("Enter The number b=");
    scanf("%d",&b);

     printf("Enter The number c=");
    scanf("%d",&c);

     printf("Enter The number d=");
    scanf("%d",&d);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("A is max");
            }
            
        }
        
       
    }

     else if(b>c)
        {
            if (b>d)
            {
               printf("B is max");
            }
            
        }

    else if (c>d){
        printf("c is max");
    }
        
        else{
            printf("D is max");
        }
}