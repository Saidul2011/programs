#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
        return fact;
    }
void main(){
    int n;
    float sum=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for (float i = 1; i <=n; i++)
    {

           sum+=(i/factorial(i));
        
    }
    printf("The sum is: %f",sum);
}