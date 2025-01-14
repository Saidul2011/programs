#include<stdio.h>



void main(){
    int  arr[5]={5,3,2,4,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            }
        }
    
    }
    printf("\n");

    for(int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
}