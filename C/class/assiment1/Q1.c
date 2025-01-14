#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count=0;
    while (n!=0)
    {
        if (n>0)
        {
           count++;
           n=n/10;
        }
        else { count++;
        n=n/10;}
        
    }
    printf("Number of digits are : %d",count);
    
}