#include<stdio.h>
#include<string.h>

typedef struct books
    {
        char name[20];
        int pages;
        int price;
    } books;
 void fun(books book ){
    printf("%s\n",book.name);
    printf("%d\n",book.pages);
    printf("%d\n",book.price);
 }

 void main(){
    books book1;
    book1.pages=456;
    book1.price=147;
    strcpy(book1.name,"Bengli");
    fun(book1);  // pass by value
 }