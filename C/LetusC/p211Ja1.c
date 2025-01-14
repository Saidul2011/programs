#include<stdio.h>
int digitSum(int n){
    int sum=0;
    while(n!=0){
    sum+=n%10;
    n=n/10;
    }
    return sum;
}
void main(){
    int n;
    printf("Enter the integer: ");
    scanf("%d",&n);
    int sum=digitSum(n);
    printf("Digits of sum is %d",sum);

}
