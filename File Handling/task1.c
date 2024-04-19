#include<stdio.h>
main(){
    FILE *p;
    char data[100];

    p = fopen("demo2.txt","a");

    if (p == NULL)
    {
        printf("Oops! File can't open..\n");
    }
    else{
        printf("Open file successfully..\n");

        printf("Enter your data : ");
        gets(data);
        fputs(data,p);
    }
    
}
