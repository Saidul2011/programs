#include<stdio.h>
// Q) Calculate the sum of all the elements in the given array?

void main(){
        int arr[5]={3,4,3,2,10};
        int i,sum=0;
        for(i=0;i<5;i++){
            sum+= arr[i];
        }
         printf("%d",sum);
}