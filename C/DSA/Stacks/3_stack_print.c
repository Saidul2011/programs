#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int stack_arr[SIZE];
int top = -1;

void push(int data){
    if(top == SIZE -1 ){
        printf("Stack overflow\n");
        return;
    }
        top++;
    stack_arr[top]  = data;
}

int pop(){
    if(top == -1 ){
        printf("Stack underflow\n");
        exit(1);
    }
        int value = stack_arr[top];
        top--;
        return value;
    
}

void display(){
    int i;
    if(top == -1){
        printf("Stack empty.\n");
        return;
    }
    for ( i = 0 ; i<=top ; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
    
}

void main(){
    int data;

    push(1);
    display();
    push(2);
    display();
    push(3);
    display();
    push(4);
    display();
    push(5);
    display();


    data=pop();
    display();
    data=pop();
    display();
    data=pop();
    display();
    data=pop();
    display();
    data=pop();
    display();
}