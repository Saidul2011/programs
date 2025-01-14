#include<stdio.h>
int main(){
    // Write a program to print reverse of given number.
    int n, d,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (n!=0)
    {  
        s=s*10 + n%10;
        n=n/10;
    }
    printf("Revese number is : %d",s);

    return 0;
}