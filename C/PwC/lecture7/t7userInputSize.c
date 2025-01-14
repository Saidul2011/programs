#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter size of array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("\n%d",sum);
}