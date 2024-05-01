// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char com_str1[100],com_str2[100];
    int compare;
    
    printf("Enter First String : ");
    scanf("%s",&com_str1);
    printf("Enter Second String : ");
    scanf("%s",&com_str2);
    for(int i=0; com_str1[i]; i++)
    {
        for(int j=0; com_str2[j]; j++)
	    {
	        if(com_str1[i] == com_str2[j]) 
			{
		        compare = 0;
		    } 
			else 
			{
		        compare = 1;
		    }
	    }
    }
    if(compare == 0) 
	{
        printf("Both Strings are Equal...");
    } 
	else 
	{
        printf("Both Strings are Not Equal...");
    }
}