#include<stdio.h>
void deleteElement();
int main(){
    int arr[100],size,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter %d elements in  the array: ",size);
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the element to be deleted: ");
    scanf("%d",&pos);
    deleteElement(arr, size, pos);
    return 0;
}

void deleteElement(int arr[],int size, int pos){
    if(pos>size-1 ||  pos<0){
        printf("Invalid position.");
        return;
    }

    for(int i=pos;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    for (size_t i = 0; i < size-1; i++)
    {
        printf("%d " ,arr[i]);
    }
    
}