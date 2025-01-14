#include<stdio.h>
int fact(int n);
void main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int y=fact(x);
    printf("%d",y);
}
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}