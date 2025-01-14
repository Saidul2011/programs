#include<stdio.h>
int findGCD(int a, int b);
int findLCM(int a,int b,int gcd);

int  main(){
    int n1,n2,gcd, lcm;
    printf("Enter two number: ");
    scanf("%d%d",&n1,&n2);
    gcd=findGCD(n1, n2);
    lcm=findLCM(n1, n2, gcd);
    printf("\nGCD of %d, %d is : %d.",n1, n2, gcd);
    printf("\nLCM of %d, %d is : %d.",n1, n2, lcm);
    return 0;
}
int findGCD(int a, int b ){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int findLCM(int a, int b, int gcd){
    return (a*b)/gcd;
}