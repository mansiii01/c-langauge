#include <stdio.h>
#include <string.h>
    struct student{
        int stu_id,stu_standard,stu_age;
        char stu_name[100],stu_course[100],stu_city[50],stu_school[200];
        
    }s[100];

void main(){
    for(int i=0;i<3;i++){
        printf("Enter id : ");
        scanf("%d",&s[i].stu_id);
        
        printf("Enter std : ");
        scanf("%d",&s[i].stu_standard);
        
        printf("Enter age : ");
        scanf("%d",&s[i].stu_age);
        
        printf("Enter name : ");
        scanf("%s",&s[i].stu_name);
        
        printf("Enter couse : ");
        scanf("%s",&s[i].stu_course);
        
        printf("Enter city : ");
        scanf("%s",&s[i].stu_city);
        
        printf("Enter school : ");
        scanf("%s",&s[i].stu_school);
        
        printf("\n");
        
    }
    
    for(int i=0;i<3;i++){
        printf("%d\n",s[i].stu_id);
        printf("%d\n",s[i].stu_standard);
        printf("%d\n",s[i].stu_age);
        printf("%s\n",s[i].stu_name);
        printf("%s\n",s[i].stu_course);
        printf("%s\n",s[i].stu_city);
        printf("%s\n",s[i].stu_school);
    }


}