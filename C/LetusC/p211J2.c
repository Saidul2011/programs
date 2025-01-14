#include<stdio.h>
int digitsum(int x){
    if(x==0) return 0;
    return (x%10)+digitsum(x/10);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum=digitsum(n);
    printf("Digits sum is : %d",sum);
}