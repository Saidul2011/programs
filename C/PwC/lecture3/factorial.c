#include<stdio.h>
void main(){
    int n,f=1;
    printf("Enter a number ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("1");
    }
    else{
    for (int i =1 ; i <= n; i++)
    {
        f=f*i;
    }
    printf("%d",f);
    }
}