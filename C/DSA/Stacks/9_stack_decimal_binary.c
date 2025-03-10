#include<stdio.h>

#include<stdlib.h>

#define SIZE 50

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
    for ( i = top ; i>=0 ; i--)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
    
}


void decToBin(int dec){
    int rem;
    while(dec != 0){
        rem= dec%2;
        push(rem);
        dec/=2;
    }
}




void main(){
    int dec;
    printf("Enter the decimal number : ");
    scanf("%d", &dec);
    decToBin(dec);
    display();
    

}

