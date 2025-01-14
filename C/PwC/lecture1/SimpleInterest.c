#include<stdio.h>
int main(){
    float principal,  Rate, time, simple_interest;
    principal = 250;
    Rate = 5;
    time = 3;
    simple_interest = (principal * Rate * time)/100;
    printf("Simple Interest is : %f",simple_interest);
    return 0;
}