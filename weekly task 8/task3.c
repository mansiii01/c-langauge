#include <stdio.h>

int main() {
    
    int m;
    
    printf("enter number=");
    scanf("%d",&m);
    
    for(int i=1;i<=m;i++){
        printf("%d",i);
    }
    
    printf("\n");
    
    for(int i=m;i>=1;i--){
        printf("%d",i);
    }
    
    
}