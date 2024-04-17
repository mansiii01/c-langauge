#include <stdio.h>
#include <string.h>
    struct book{
        int book_id,book_publication_year,book_price;
        char book_title[100],book_author[100],book_genre[50],book_publisher[200];
        
    }b[100];

void main(){
    for(int i=0;i<3;i++){
        printf("Enter book id : ");
        scanf("%d",&b[i].book_id);
        
        printf("Enter book title : ");
        scanf("%s",&b[i].book_title);
        
        printf("Enter author name : ");
        scanf("%s",&b[i].book_author);
        
        printf("Enter book publisher : ");
        scanf("%s",&b[i].book_publisher);
        
        printf("Enter book publication year : ");
        scanf("%d",&b[i].book_publication_year);
        
        printf("Enter book's genre : ");
        scanf("%s",&b[i].book_genre);
        
        printf("Enter book price : ");
        scanf("%d",&b[i].book_price);
        
        printf("\n");
        
    }
    
    for(int i=0;i<3;i++){
        printf("%d\n",b[i].book_id);
        printf("%s\n",b[i].book_title);
        printf("%s\n",b[i].book_author);
        printf("%s\n",b[i].book_publisher);
        printf("%d\n",b[i].book_publication_year);
        printf("%s\n",b[i].book_genre);
        printf("%d\n",b[i].book_price);
    }


}