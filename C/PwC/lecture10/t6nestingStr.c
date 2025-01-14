#include<stdio.h>
#include<string.h>
int main(){
    typedef struct books
    {
        char  name[20];
        int page;
        float price;
    } book ;
    
    typedef struct book_part
    {
        book normal;
        int part;
    } book_part;

    typedef struct book_edition
    {
        book_part part;
        int edition;
    } book_edition;

    book  book1;
    strcpy(book1.name,"Atomic Habit");
    book1.page=345;
    book1.price=746.43;
    
    book_part book2;
    book2.part=2;
    book2.normal.price=546.46;
    book2.normal.page=645;
    strcpy(book2.normal.name,"Physics HC Varma");

    book_edition book3;
    book3.edition=5;
    book3.part.part=2;
    book3.part.normal.price=466.50;
    book3.part.normal.page=884;
    strcpy(book3.part.normal.name,"Let Us C");

    printf("%s\n",book1.name);
    printf("Pages %d\n",book1.page);
    printf("Price %f\n\n",book1.price);

    printf("%s\n",book2.normal.name);
    printf("Pages %d\n",book2.normal.page);
    printf("Price %f\n",book2.normal.price);
    printf("Part %d\n\n",book2.part);

    printf("%s\n",book3.part.normal.name);
    printf("Pages %d\n",book3.part.normal.page);
    printf("Price %f\n",book3.part.normal.price);
    printf("Part %d\n",book3.part.part);
    printf("Edition %d\n\n",book3.edition);


    return 0;
}