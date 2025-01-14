#include<stdio.h>
void main(){
    int n;
    printf("Enter a 4-digits number:");
    scanf("%d",&n);
    int r,s=0;
    while (n!=0)
    {
        s=s+n%10;
        n=n/1000;

    }
    
   
    printf("The sum is : %d",s);
    
}
