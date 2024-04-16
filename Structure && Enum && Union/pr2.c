#include <stdio.h>
#include <string.h>
    struct student{
        int emp_id,emp_age,emp_experience;
        char emp_name[100],emp_city[50],emp_role[50],emp_company_name[200];
        
    }s[100];

void main(){
    for(int i=0;i<3;i++){
        printf("Enter id : ");
        scanf("%d",&s[i].emp_id);
        
        printf("Enter age : ");
        scanf("%d",&s[i].emp_age);
        
        printf("Enter Your experience : ");
        scanf("%d",&s[i].emp_experience);
        
        printf("Enter name : ");
        scanf("%s",&s[i].emp_name);
        
        printf("Enter city : ");
        scanf("%s",&s[i].emp_city);
        
        printf("Enter role : ");
        scanf("%s",&s[i].emp_role);
        
        printf("Enter company name : ");
        scanf("%s",&s[i].emp_company_name);
        
        printf("\n");
        
    }
    
    for(int i=0;i<3;i++){
        printf("%d\n",s[i].emp_id);
        printf("%d\n",s[i].emp_age);
        printf("%d\n",s[i].emp_experience);
        printf("%s\n",s[i].emp_name);
        printf("%s\n",s[i].emp_city);
        printf("%s\n",s[i].emp_role);
        printf("%s\n",s[i].emp_company_name);
    }


}