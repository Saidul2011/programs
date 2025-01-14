#include<stdio.h>
#include<stdbool.h>

    /*  Ques : Given an integer al .xuy arr, move all Ols to the
        end of it while maintaining the relative order of the
        non-zero elements.*/


void main(){
    int  arr[9]={5,0,2,0,0,4,1,3,0};
    int n=9;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // bubble 
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}