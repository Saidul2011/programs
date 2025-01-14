#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int t=n;
    int r,s=0;
    while (t!=0)
    {
        s=s*10+t%10;
        t=t/10;
    }
    if (n==s)
    {
        printf("The number is palindrome.");
    }
    else printf("Not palimdrome."); 
    
}
