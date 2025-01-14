#include<stdio.h>
void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
   
}
void main(){
    int a=5;
    int b=7;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
    
}