#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Enter the power ");
    scanf("%d",&b);
    int pow=1;
    for (int i = 1; i <=b; i++)
    {
        pow=pow*a;
    }
    printf("%d",pow);
}