#include<stdio.h>

#include<stdlib.h>

#define SIZE 4

int stack_arr[SIZE];
int top = -1;

int pop(){

    if(top == -1 ){
        printf("Stack underflow");
        exit(1);
    }
        int value = stack_arr[top];
        top--;
        return value;
    
}

void main(){
    int data;
    data=pop();
    data=pop();
    data=pop();
    data=pop();
    data=pop();
}