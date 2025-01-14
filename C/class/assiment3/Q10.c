#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
void main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    int reg=power(a,b);
    printf("Result: %d",reg);
}