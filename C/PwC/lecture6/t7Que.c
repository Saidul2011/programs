#include<stdio.h>
// Q) Make a funtion which calculates 'a' raised to power 'b' using recursion ?
int power(int a, int b){
    if(b==0) return 1;
    int x=a*power(a,b-1);
    return x;
}
int main(){
    int a,b;
    printf("Enter numbers ");
    scanf("%d%d",&a,&b);
    int x=power(a,b);
    printf("%d\n",x);
    return 0;
}