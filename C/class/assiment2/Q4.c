#include<stdio.h>
void reverse(int x[]){
    int i=0;
    int j=8;
    while(i<j){
        int temp=x[i];
        x[i]=x[j];
        x[j]=temp;
        i++;
        j--;
       
    }
     return ;
}
void main(){
    int arr[9]={1,2,66,4,2,6,0,8,9};
    reverse(arr);
    for(int i=0;i<9;i++){
       printf("%d ",arr[i]);
    }
}