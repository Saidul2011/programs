#include<stdio.h>

int sum=0, rem;
int d=0,  brem;
int binary(int );
int reverse(int );

void main(){
    int n;
    printf("Enter a Decimal number : ");
    scanf("%d",&n);

    
    int value= reverse(binary(n));

    printf("Binary value: %d",value);

} 

int binary(int n){
    if(n==0) return sum;
        
    rem=n%2;
        sum= sum*10 +rem;
    binary(n/2);

return sum;

}

int reverse(int n){
    while(n){
        brem=n%10;
        d=d*10+ brem;
        n/=10;
    }
    return d;
}
