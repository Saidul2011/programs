#include<stdio.h>
void main(){
int arr[10];
printf("Enter The Numbers:");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}
int min=arr[0];
for(int j=0;j<10;j++){
    if(arr[j]<min) min=arr[j];
}
int max=arr[0];
for(int j=0;j<10;j++){
    if(arr[j]>max) max=arr[j];
}
int range=max-min;
printf("The range is: %d",range);
}