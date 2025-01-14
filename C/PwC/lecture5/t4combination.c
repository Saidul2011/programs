#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("Enter n C r ");
    scanf("%d%d",&n,&r);
    // int nfact= factorial(n);
    // int rfact= factorial(r);
    // int n_rfact= factorial(n-r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
}