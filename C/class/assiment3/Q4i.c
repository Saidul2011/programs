#include<stdio.h>
void swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("\n%d %d",x,y);
}
void main(){
    int a=5, b=7;
    printf("%d %d",a,b);
    swap(a,b);
}