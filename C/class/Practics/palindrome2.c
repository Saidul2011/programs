#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=n;
    int s=0;
    while(n!=0){
        s= s*10 + n%10 ;
        n=n/10;
    }
    if(s==a) printf("The number is Palindrome.");
    else printf("Not palindrome.");
    return 0;
}