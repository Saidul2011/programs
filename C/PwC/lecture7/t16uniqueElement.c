#include<stdio.h>
#include<stdbool.h>
// Q) Find the unique number in a given array where all the elements are 
//    repeated twice with one element being unique.

void main(){
    int arr[11]={1,2,3,4,5,7,1,2,3,4,5};
    
    for(int i=0;i<10;i++){
        bool flag=false;
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                flag=true;
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
            break;
        }
    }
}