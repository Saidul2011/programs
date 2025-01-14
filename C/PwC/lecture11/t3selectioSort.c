#include<stdio.h>
#include<limits.h>
void main(){
    int  arr[5]={5,3,2,4,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // selection sort
    for(int i=0;i<n-1;i++){
        int min= INT_MAX;
        int minindx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minindx=j;
            }
        }
        // swap  the min and first element of the unsort part
        int temp=arr[minindx];
        arr[minindx]=arr[i];
        arr[i]=temp;

    }
    
    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}