#include<stdio.h>

int sum(int arr[],int size){
    int add;
    printf("Enter array element...\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        add += arr[i];
    }
    printf("sum is : ");
    return add;
}
void main(){

    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];
    printf("%d",sum(arr,size));

}