#include <stdio.h>
#include <string.h>

int main()
{
    
    char str_occur[100],target;
    int count=0;
    printf("Enter any String : ");
    scanf("%s",&str_occur);
    printf("Enter Target Character That Occur in String : ");
    scanf("%s",&target);
    for(int i=0; str_occur[i]; i++)
    {
        if(str_occur[i] == target)
        {
            count++;
        }
    }
    printf("Count Of Occur Character in String : %d",count);


}
