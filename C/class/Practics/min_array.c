#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={-4,5,6,-2,7};
    int min=INT_MAX;
    int max=INT_MIN;
    for (size_t i = 0; i < 5; i++)
    {
        if(arr[i]<min) min=arr[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    printf("The largest element in array is: %d",max);
    printf("\nThe smallest element in array is: %d",min);
    return 0;
}