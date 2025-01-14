#include<stdio.h>
void main(){
    int arr[8]={3,5,5,4,6,7,8,5};
    for(int i=0;i<8;i++)
    printf("%p\n",&arr[i]);   // Address print %p, &n
}