#include <stdio.h>
#include <string.h>

int main()
{
        char str_lower[100];
    printf ("Enter any String : ");
    scanf ("%s", &str_lower);
    for(int i = 0; str_lower[i]; i++)
	{
	    if(str_lower[i] >= 'A' && str_lower[i] <= 'Z')
	    {
		  str_lower[i] +=32;
		}
		else if(str_lower[i] >= 'a' && str_lower[i] <= 'z')
	    {
		  str_lower[i] -=32;
		}
	}
    printf ("Convert String in LowerCase : %s", str_lower);


}
