#include <stdio.h>

struct Book{
    char title[50];
    char author[30];
    float price;
};

int main() {
    struct Book book1 = {"Harry Potter and the Philosopher's Stone", "J.K. Rowling", 999.99};
    
    printf("Name : %s\nAuthur : %s\nPrice : Rs.%.2f",book1.title,book1.author,book1.price);
   
    return 0;
}
