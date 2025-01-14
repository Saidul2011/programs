#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int r,s=0;
    int count=0;
    for( int i = 1; n!=0; i++)
    
    {
        s=s+n%10;
        n=n/10;
    }
    
   
    printf("Sum of digits  : %d",s);
    
}
