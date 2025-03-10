#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void selection_sort(int arr[],int n){
    int index;
    
    for(int i=0; i<n; i++){
        int min=arr[i];
        index=i;
        for (int j = i+1; j < n; j++)
        {    
                    
            if(min > arr[j]){
                min=arr[j];
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;   
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
    selection_sort(arr,n);
    printf("sorted elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}