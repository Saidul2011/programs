#include<stdio.h>
void swapr(int *x,int *y){
    int t;;
    t=*x;
    printf("%d\n",*x);
    printf("%u",&*x);
    *x=*y;
    *y=t;
}
void  main(){
    int a=10;
    int b=20;
    printf("%u\n",&a);
    swapr(&a,&b);
    printf("\na=%d b=%d\n",a,b);
    printf("%u\n",&a);
}