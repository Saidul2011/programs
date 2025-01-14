#include<stdio.h>
// Array is not full
int add_at_end(int a[], int freePos, int data);
int main(){
    int a[10];
    int i, n, freePos;
    printf("Enter the no. of elements:");
    scanf("%d", &n);
    printf("Enter the all elements:");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    freePos=n;
    freePos= add_at_end(a, freePos, 65);
    printf("Fainal array elements:\n");
    for ( i = 0; i < freePos; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

int add_at_end(int a[], int freePos, int data){
    a[freePos]=data;
    freePos++;          // Time complexity O(1)
    return freePos;
}