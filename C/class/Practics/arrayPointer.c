#include<stdio.h>
void main(){
    int x=3,y=4,z=5;
    int *i;
    int *j;
    int *k;
    i=&x;
    j=&y;
    k=&z;
    printf("%u\n",i);
    printf("%d\n",*i);
    printf("%u\n",&x);
    i++;
    printf("%u\n",i);
    printf("%d\n",*i);
    printf("%u\n",&x);
    printf("%d\n",*&x);
    printf("%d\n",x);
}