#include<stdio.h>
typedef int* Pointer;
void main(){
    int x=5 ,y=7;
    // int* a=&x ,b=&y;    // this are worng
    Pointer a=&x ,b=&y;
    printf("%p",a);
    printf("\n%p",b);

}