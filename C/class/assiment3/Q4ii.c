#include<stdio.h>
void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void main(){
    int a=5, b=7;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
}