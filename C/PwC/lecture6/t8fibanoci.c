#include<stdio.h>
// Q) Make a funtion to calculate fibonacci number using recursion ?
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+ fibo(n-2);
}
int main(){
    int n;
    printf("Enter numbers ");
    scanf("%d",&n);
    printf("%d\n",fibo(n));
    return 0;
}