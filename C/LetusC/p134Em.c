#include<stdio.h>
void main(){
    float x;
    printf("Enter the value of x :");
    scanf("%f",&x);
    float a=(x-1)/x;
    float pow=1;
    for (int i = 2; i <=100; i++)
    {
        for (int j= 1; j <=i; j++)
        {
            pow=pow*a;
        }
        pow=pow/2;
        pow+=pow;
    }
    printf("The value is : %f",a+pow);
}