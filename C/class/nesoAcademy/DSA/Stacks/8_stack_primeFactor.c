#include<stdio.h>

#include<stdlib.h>

#define SIZE 20

int stack_arr[SIZE];
int top = -1;

int isFull(){
    if(top == SIZE -1) return 1;

    else return 0;
}

int isEmpty(){
    if(top == -1) return 1;
    else return 0;
}

void push(int data){
    if(isFull()){
        printf("Stack overflow\n");
        return;
    }
        top++;
    stack_arr[top]  = data;
}

int pop(){
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
        int value = stack_arr[top];
        top--;
        return value;  
}


int peek(){
    if(isEmpty()) {
        printf("Stack is Empty!");
        exit(1);
    }
    return stack_arr[top];
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

void primeFactor(int num){
    int i=2;
    while(num != 1){
        while(num % i == 0){
            push(i);
            num/=i;
        }
        i++;
    }
    printf("Prime factor of this number : \n");
    while (top != -1)
    {
        printf("%d ", pop());
    }
    
}



void main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    primeFactor(num);
}

