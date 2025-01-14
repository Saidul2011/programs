#include<stdio.h>
#include<stdbool.h>
void main(){
    int  arr[5]={5,3,2,4,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // bubble sort
 
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}