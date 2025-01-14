#include<stdio.h>
/* Q) Rotate the given array start to end by k-steps.
Ans:- steps:
  1)  k=k%n      where k=No. of rotation & n=array size
  2) reverse(arr,0,n-1)
  3) reverse(arr,0,k-1)
  4) reverse(arr,k,n-1)
  */
void reverse(int x[],int si, int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=x[i];
        x[i]=x[j];
        x[j]=temp; 
    }
     return ;
}
void main(){
    int arr[9]={1,2,66,4,2,6,0,8,9};
    int n=9;
    int k;
    printf("Enter a number : ");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<9;i++){
       printf("%d ",arr[i]);
    }
}