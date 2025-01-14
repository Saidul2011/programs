#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // last digit 
    int a=n%10;
    // first digit 
    int b;
    while(n>10){
         n=n/10;
         b=n;
    }
    int sum=a+b;
    printf("The sum is : %d",sum);
    return 0;
}