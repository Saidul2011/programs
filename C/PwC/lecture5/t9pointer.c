#include<stdio.h>
int main(){
    // %p address print
    int a =5 ;
    int b =5; 
    int* x=&a;
    printf("%p\n",&a); // a ka address
    printf("%p\n",&b); // b ka address
    printf("%p\n",x); // a ka address
    printf("%p\n",&x);  // x ka address
    printf("%d\n",*x);  // a  ka value
    *x=7;  // address ka value chenge
    printf("%d",a);
    return 0;
}