#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n); 
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    int arr[11]={6,2,4,3,4,4,6,6,3,2,3};
    for(int i=0;i<count;i++){
        printf("%d",arr[i]);
    }
    return 0;
}