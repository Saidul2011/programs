#include<stdio.h>
void main(){
    int n,a,b,s;
    printf("Enter number of turms ");
    scanf("%d",&n);
    a=1;
    b=1;
    s=1;
    for (int i = 1; i<=n-2; i++)
    {
        s=a+b;
        a=b;
        b=s;
    }
    printf("%d",s);
}