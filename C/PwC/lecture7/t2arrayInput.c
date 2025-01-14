#include<stdio.h>
void main(){
    int arr[5]; 
    
    for(int i=0; i<=4;i++){
    printf("Enter element number %d : ",i+1);
    scanf("%d",&arr[i]);
    }
    printf("You enter numbers are : ");
    for(int i=0; i<=4;i++){
    printf("%d ",arr[i]);
    }
}