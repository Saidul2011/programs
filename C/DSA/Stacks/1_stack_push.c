#include<stdio.h>
#define SIZE 4

int stack_arr[SIZE];
int top = -1;

void push(int data){
    if(top == SIZE -1 ){
        printf("Stack overflow");
        return;
    }
        top++;
    stack_arr[top]  = data;
}

void main(){
    push(1);
    push(2);
    push(3);
    push(4);
}