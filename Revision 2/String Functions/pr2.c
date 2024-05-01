#include<stdio.h>
main(){
     char str1[100], str2[100];
    printf("Enter First String : ");
    scanf("%s",&str1);
    printf("Enter Second String : ");
    scanf("%s",&str2);

    char *ptr = str1;
    while (*ptr != '\0')
	{
        ptr++;
    }
    
    strcat(ptr, str2);
    printf("Concate Both String is : %s", str1);
    

}