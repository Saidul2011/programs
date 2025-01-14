#include<stdio.h>
int main(){
    // Write a program to count digits of given number.
    int n,d=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        d++;
    }
   

    printf("Numer of digits of is %d",d);

    return 0;
}