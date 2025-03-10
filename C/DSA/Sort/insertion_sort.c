#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[], int n){
    for (int  i = 0; i < n ; i++)
    {
          int i,j, temp;
          for (int i = 1; i < n; i++)
          {
            temp=arr[i];
            j=i-1;
            while((temp<arr[j]) && (j>=0)){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
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
    insertion_sort(arr,n);
    printf("sorted elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

