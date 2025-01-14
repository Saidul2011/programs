#include<stdio.h>
#include<math.h>

int isPrime(int n){
    if(n<=1) return 0;

    for (int i = 2; i <sqrt(n) ; i++)
    {
        if(n%i==0)  return 0;
    }
    return  1;
    
}

int isArmstrong(int n){
    int sum=0, temp=n, digits=0;

    while(temp>0){
        digits++;
        temp/=10;
    }

    temp=n;
    while(temp>0){
        int remainder=temp%10;
        sum +=pow(remainder, digits);
        temp/=10;
    }

    return sum==n;
}

int isPerfect(int n){
    int sum=0;
    for (size_t i = 1; i < n; i++)
    {
        if(n%i==0) 
        sum += i;
    }
    
    return sum==n;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(isPrime(n)) printf("Prime.\n");
    else printf("Not Prime.\n");

    if(isArmstrong(n)) printf("Armstrong.\n");
    else printf("Not Armstrong.\n");

    if(isPerfect(n)) printf("Perfect.\n");  
    else   printf("Not Perfect.\n");
}