#include<stdio.h>
void binary(int );

void main(){
    int n;
    printf("Enter a Decimal number : ");
    scanf("%d",&n);

    binary(n);

}

void binary(int n){
    if(n==1) printf("%d",n);

    else {
        int b=n%2;
        binary(n/2);
        printf("%d",b);
    }
}