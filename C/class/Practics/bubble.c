#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    
}

int main(){
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elememt : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("sorted elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
