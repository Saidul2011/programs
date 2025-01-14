#include<stdio.h>
int main(){
    // Modulo operator : % , 
    // a % b = remainder when a divided by b , [a>b]
    // a % b = a [a<b]
    //Q) Take two integers input, a and b ,where a>b. Find the remainder when a is divided b.
    int a , b; //a>b
    printf("Enter dividend : ");
    scanf("%d",&a); 
    printf("Enter divisor : ");
    scanf("%d",&b);
    int r = a%b;
    printf("The remainder when %d is divided by %d is : %d",a,b,r);


    return 0;
}