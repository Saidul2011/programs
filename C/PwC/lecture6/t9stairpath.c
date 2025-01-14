#include<stdio.h>
// stair path ways single or duble  or triple steps
int fibo(int n){
    if(n==0) return 1;
    if(n==1 || n==2 ) return n;
    //if(n==3) return 4;
    
    return fibo(n-1)+fibo(n-2)+fibo(n-3);
}
int main(){
    int n;
    printf("Enter numbers ");
    scanf("%d",&n);
    printf("%d\n",fibo(n));
    return 0;
}