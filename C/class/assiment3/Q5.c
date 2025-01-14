#include<stdio.h>
int digitSum(int n){
    if(n==0) return 0;
    int a=n%10;
    return a+digitSum(n/10);
}
void main(){
    int n;
    printf("Enter A number : ");
    scanf("%d",&n);
    int sum = digitSum(n);
    printf("Digit sum is: %d",sum);

}