#include<stdio.h>
void main(){
    // Q) find the second largest elememt in the given Array?
    
    int arr[8]={-4,-4,-2,-7,-5,-5,-6,4};
    
        int max=arr[0];
        int smax=arr[0];
     for(int i=0;i<8;i++){
        if(arr[i]>max) max=arr[i];
    }
     for(int i=0;i<8;i++){
        if(arr[i]!=max && arr[i]>smax) smax=arr[i];
    }
      // OR 
    // for(int i=0;i<8;i++){
    //     if(arr[i]>max){
    //     smax=max; // smax is now previous max
    //     max=arr[i]; // max is now a new max
    //     } 
    //        else if (smax<arr[i] && max!=arr[i]) 
    //        {
    //           smax=arr[i];
    //        }
           
    //     }                
    printf("\nMax: %d",smax);
    
}