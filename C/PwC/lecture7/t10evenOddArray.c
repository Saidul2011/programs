#include<stdio.h>
void main(){
    // Q) Find the difference between the sum of elements at even indices to the sum
    //    of elements at odd indices?
    int arr[10]={3,6,7,9,11,23,34,45,46,50};
    int evenSum=0, oddSum=0;
    for(int i=0;i<10;i++){
        if(i%2==0){
         evenSum+= arr[i];
        }
        else oddSum+=arr[i];
    }
    int difference=evenSum-oddSum;
    printf("%d",difference);
}