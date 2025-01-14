#include<stdio.h>
int main(){

    float radius , pi , area;
    printf("Enter the redius : ");
    scanf("%f",&radius);
     pi = 3.1415;
     area = pi * radius * radius;
    printf("The area of circle is : %f",area);
    return 0;
}