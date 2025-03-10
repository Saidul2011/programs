#include<stdio.h>
// Array is not full
int add_at_end(int a[], int b[], int n, int freePos, int data);
int main(){
    int a[3];
    int i, n, freePos;
    printf("Enter the no. of elements:");
    scanf("%d", &n);
    printf("Enter the all elements:");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int size=sizeof(a)/sizeof(a[0]);
    freePos=n;
    if(n==size){
        int b[size+2];
        freePos= add_at_end(a,b,size,freePos,65);
    
    printf("Fainal array elements:\n");
    for ( i = 0; i < freePos; i++)
    {
        printf("%d ",b[i]);
    }
    }
    return 0;
}

int add_at_end(int a[], int b[], int n, int freePos, int data){
    for (size_t i = 0; i < n; i++){
        b[i]=a[i];
    }                       // Time complexity O(n)
    b[freePos]=data;
    freePos++;
    return freePos;
    
}

