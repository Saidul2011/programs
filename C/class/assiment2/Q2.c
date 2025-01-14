#include<stdio.h>
void main(){
    int arr[8]={4,5,3,2,4,2,8,1};
    int sum=0;
    for (int i = 0; i < 8; i++)
    {
        sum +=arr[i];
    }
    printf("The sum is: %d",sum);
}