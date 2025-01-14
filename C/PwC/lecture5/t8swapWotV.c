#include<stdio.h>
int main(){
    printf("Enter a ");
    int a;
    scanf("%d",&a);
    printf("Enter b ");
    int b;
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a is %d\n",a);
    printf("Value of a is %d",b);
    return 0;
}