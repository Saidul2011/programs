#include<stdio.h>
#include<string.h>
void main(){
    typedef struct Book
    {
        char name[40];
        float price;
        int pages;
    } Book;

    Book arr[7];
    strcpy(arr[0].name,"Bengali");
    arr[0].price=180.20;
    arr[0].pages=215;
    strcpy(arr[1].name,"English");
    arr[1].price=90.70;
    arr[1].pages=180;
    strcpy(arr[2].name,"Mathematics");
    arr[2].price=120.5;
    arr[2].pages=499;
    strcpy(arr[3].name,"Physics");
    arr[3].price=190;
    arr[3].pages=199;
    strcpy(arr[4].name,"Biology");
    arr[4].price=380.40;
    arr[4].pages=780;
    strcpy(arr[5].name,"Geograpy");
    arr[5].price=300;
    arr[5].pages=205;
    strcpy(arr[6].name,"History");
    arr[6].price=170.5;
    arr[6].pages=268;
    for (int i = 0; i < 7; i++)
    {
       printf("%s\n",arr[i].name);
       printf("%f\n",arr[i].price);
       printf("%d\n",arr[i].pages);
       printf("\n");
    }
    
    
}