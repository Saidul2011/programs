#include<stdio.h>
#include<limits.h>
int main(){
    int a ,b;
    int max, max_fact, hold=1;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)  max=a;
    else   max=b;
    for(int i=1; i<=max; i++){
        if(a%i==0 && b%i==0) max_fact=i;
        if(max_fact>hold) hold=max_fact;
    }
    int gcd=hold;
    int lcm=(a*b)/gcd;
    printf("GCD of %d,%d is: %d", a, b, gcd);
    printf("\nLCM of %d,%d is: %d", a, b, lcm);
    return 0;
}