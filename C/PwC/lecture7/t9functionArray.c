#include<stdio.h>
void fun(int arr[]){
    arr[0]=1;
    arr[1]=5;
    arr[2]=3;
    return ;
}
void main(){
    int x[4]={4,8,7,0};
    fun(x);
    printf("%d %d %d %d",x[0],x[1],x[2],x[3]); //  not "pass cy value", this is reference
}