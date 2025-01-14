#include<stdio.h>
#include<limits.h>
void main(){
    int n;
    printf("Enter size of array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        //int max=arr[0];
        int max= INT_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        else max=max;
    }
    printf("\nMax: %d",max);
        int min= INT_MAX;
     for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
        else min=min;
    }
    printf("\nMin: %d",min);
    
}