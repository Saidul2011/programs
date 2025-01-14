#include<stdio.h>
int main(){

    float p;
    int R;
    float t, SI;
    printf("Enter values of p , R , t :");
    scanf("%f %d %f",&p ,&R ,&t);
    SI=(p*R*t)/100;
    printf("Principal = %f Rate = %d Time %f \nSimple interest is : %f",p, R, t, SI);

    return 0;
}