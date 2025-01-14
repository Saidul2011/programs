#include<stdio.h>
void main(){
    int x=5;
    int y=6;
    int *p1;
    int *p2;
    p1=&x;
    p2=&y;
    printf("%d\n%d\n", p1, p2);
    p1++;
    p2--;

    printf("%d\n%d\n", p1, p2);
}