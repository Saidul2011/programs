#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int s=0;
    while(n!=0){
        s= s + n%10 ;
        n=n/10;
    }
    printf("The reverse number is: %d",s);
    return 0;
}