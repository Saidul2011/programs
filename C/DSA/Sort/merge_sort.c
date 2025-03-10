#include<stdio.h>
#include<stdlib.h>
#define size 100

void merge(int arr[], int beg, int mid, int end){
    int i=beg, j=mid+1, index=beg, temp[size], k;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[index]=arr[i];
            i++;
            
        }
        else{
            temp[index]=arr[j];
            j++;
        }
        index++;
    }
    if(i>mid){
        while(j<=end){
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else{
        while(i<=mid){
            temp[index]=arr[i];
            i++;
            index++;
        }
    }

    for ( k = 0; k < index; k++)
    {
        arr[k]=temp[k];
    }
    
}

void merge_sort(int arr[],int beg, int end){
    int mid;
    if(beg<end){
        mid=(beg+end)/2;
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,beg,mid,end);

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
    merge_sort(arr,0,n-1);
    printf("sorted elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
