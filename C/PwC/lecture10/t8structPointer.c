#include<stdio.h>
#include<string.h>

typedef struct books
    {
        char name[20];
        int pages;
        int price;
    } books;
 void print(books book ){

    printf("%s\n",book.name);
    printf("%d\n",book.pages);
    printf("%d\n\n",book.price);
 }
 void change(books *p){
    (*p).pages=100;
    p->price=00; /// (*p) or p-> same
    strcpy(p->name,"English");
 }

 void main(){ 
    books book1={456,147,"Bengali"}; // in order
    // book1.pages=456;
    // book1.price=147;
    // strcpy(book1.name,"Bengli");
    print(book1);  // pass by value
    change(&book1); // pass by reference
    print(book1);

 }