#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int r,s=0;
    while (n!=0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    
   
    printf("Reverse number is : %d",s);
    
}
