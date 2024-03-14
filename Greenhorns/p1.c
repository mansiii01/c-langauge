#include<stdio.h>
main(){
    int prize , per;
    printf("original price is : ");
    scanf("%d",&prize);
    printf("discount percentage is : ");
    scanf("%d",&per);
    float dec= (prize*per)/100;
    printf("Discount amount is = %0.2f", dec);



     float w ,h,b;
    printf("\nEnter weight in kg : ");
    scanf("%f",&w);
    printf("Enter height in mtr : ");
    scanf("%f",&h);
    b=w/(h*h);
    printf("Body mass Index (BMI) : %0.2F",b);



    int an_1,an_2,an_3;
    printf("\n\nFirst Angle : ");
    scanf("%d",&an_1);
    printf("second Angle : ");
    scanf("%d",&an_2);
    an_3=180-(an_1+an_2);
    printf("Third Angle : %d",an_3);
    

    return 0;
}