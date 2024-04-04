#include<stdio.h>
main(){
    char val[] = "HelLO worLD";

    for (char i = 0; val[i] != NULL; i++)
    {
        if (val[i] >= 'A' && val[i] <= 'Z')
        {
            val[i] += 32;
        }
        else{
            val[i] -= 32;
        }
        printf("%c",val[i]);
        
    }
}