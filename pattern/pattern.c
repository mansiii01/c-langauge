#include<stdio.h>
main(){
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1 
    for(int i = 1 ; i <= 5 ; i++){
        for (int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    // 5
    // 4 5
    // 3 4 5
    // 2 3 4 5
    // 1 2 3 4 5
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
 
    }

    // 5
    // 4 4 
    // 3 3 3
    // 2 2 2 2
    // 1 1 1 1 1
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d",i);
        }
        printf("\n");
 
    }

    // 1 2 3 4 5
    // 2 3 4 5
    // 3 4 5
    // 4 5
    // 5
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
 
    }

    // 1 1 1 1 1
    // 2 2 2 2
    // 3 3 3
    // 4 4
    // 5
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d",i);
        }
        printf("\n");
 
    }

    // 1 0 1 0 1
    // 1 0 1 0
    // 1 0 1
    // 1 0 
    // 1
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            if (j % 2 == 0 )
            {
                printf("0 ");
            }
            else{
                printf("1 ");
            }
            
        }
        printf("\n");
   
    }

    // A
    // B A
    // C B A
    // D C B A
    // E D C B A
    for(int i = 65 ; i <= 69 ; i++){
        for (int j = i; j >= 65; j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }

    // 1
    // 2    3
    // 4    5   6
    // 7    8   9   10
    // 11 12 13 14 15
     int c=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%3d",c);
            c++;
        }
                printf("\n");
        
    }
    
    

}