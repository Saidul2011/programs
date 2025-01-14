#include<stdio.h>
int main(){
    // Write a program to print sum of a given number.
    int n,d,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {  
        d=n%10;
        n=n/10;
        s=s+d;
    }
   

    printf("Sum of digits of is %d",s);


    return 0;
}