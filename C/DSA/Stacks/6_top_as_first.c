#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int stack_arr[SIZE];
int first = -1;

void  push(int data){

    int i;
    first  += 1;
    for ( i = first; i > 0; i--)
    {
       stack_arr[i]=stack_arr[i-1];
    }

    stack_arr[0]= data;
    
}

int pop(){
    int i, value;
    value=stack_arr[0];
    for ( i = 0; i < first; i++)
    {
        stack_arr[i]=stack_arr[i+1];
    }
    first--;
    return value;
}


void display(){
    int i;
    if(first == -1) {
        printf("Stack is empty.");
        exit(1);
    }
    for ( i = first; i >=0; i--)
    {
        printf("%d ",stack_arr[i]);
    }
    printf("\n");
    
}

void main(){
    int data;
    push(1);
    push(2);
    data=pop();
    push(3);
    push(4);

    display();
}