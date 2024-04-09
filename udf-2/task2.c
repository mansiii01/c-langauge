#include<stdio.h>
#include <string.h>

int mystrlen(char str[50])
{
    int result;
    result = strlen(str);
    return result;
}

int main()
{
 char str[50];

 printf("Enter string:\n");
 gets(str);

 printf("Length is : %d",mystrlen(str));
}