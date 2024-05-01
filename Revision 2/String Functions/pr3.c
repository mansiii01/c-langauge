#include<stdio.h>
main(){
     char rev_str[100];
    printf("Enter any String : ");
    scanf("%s",&rev_str);

    printf("Reverse String is : %s", strrev(rev_str));
}