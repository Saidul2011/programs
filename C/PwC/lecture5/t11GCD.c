#include<stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a, int b){
    int hcf; 
    for(int i=min(a,b);i>=1;i--)
    if(a%i==0 && b%i==0){
        hcf=i;
        break;
    }
}
int main(){
    int a,b;
    printf("Enter num1 and num2 ");
    scanf("%d%d",&a,&b);
    int ans=gcd(a,b);
    printf("The HCF/GCD of %d and %d is : %d",a,b,ans);

}