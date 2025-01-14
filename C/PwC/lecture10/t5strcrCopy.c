#include<stdio.h>
#include<string.h>
int main(){
    typedef struct books
    {
        char name[20];
        int page;
        float price;
    } book ;

    book book1,book2;

    strcpy(book1.name,"Atomic Habit");
    book1.page=354;
    book1.price=750.40;

    book2=book1; // deep copy
    strcpy(book2.name,"Rich dad Poor dad");

    printf("%s\n",book1.name);
    printf("%d\n",book1.page);
    printf("%f\n\n",book1.price);

    printf("%s\n",book2.name);
    printf("%d\n",book2.page);
    printf("%f",book2.price);
    
    return 0;
}