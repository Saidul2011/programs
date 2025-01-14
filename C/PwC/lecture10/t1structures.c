#include<stdio.h>
#include<string.h>
void main(){
struct book{
    char name[40];
    float price;
    int pages;
};  // bookA,bookB;
struct book bookA;
{
    strcpy(bookA.name,"Secret Seven");
    bookA.price=275.25;
    bookA.pages=310; 
}
    printf("%s\n",bookA.name);
    printf("%f\n",bookA.price);
    printf("%d\n",bookA.pages);
struct book bookB;
{
    strcpy(bookB.name,"Atomic Habits");
    bookB.price=650.60;
    bookB.pages=360; 
}
    printf("%s\n",bookB.name);
    printf("%f\n",bookB.price);
    printf("%d\n",bookB.pages);

}