#include <stdio.h>
#include <string.h>

struct Book{
    char title[50];
    char author[30];
    float price;
};

int main() {
    struct Book books[3];
    for(int i=0;i<3;i++){
        printf("Enter Book%d Title:",i+1);
        fgets(books[i].title,sizeof(books[i].title),stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';
        
        printf("Enter Book%d Author:",i+1);
        fgets( books[i].author,sizeof(books[i].author),stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';
        
        printf("Enter Book%d Price:",i+1);
        scanf("%f", &books[i].price);
        
        while(getchar() != '\n');  
    }
 
 
     printf("\n=======Books========");
     for(int i=0;i<3;i++){
      printf("\nName : %s\nAuthur : %s\nPrice : Rs.%.2f\n",books[i].title,books[i].author,books[i].price);
    }
  
   
    return 0;
}
