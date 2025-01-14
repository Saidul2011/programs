#include<stdio.h>
void main(){
    // Q) Find the total number of pairs in the array whose sum is equal to given value x?

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x,a=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]+arr[j]==x){
            a++;
            printf("(%d,%d)\n",arr[i],arr[j]);
            }
    }
}
        printf("Number of ways : %d",a);
}