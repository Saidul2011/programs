#include<stdio.h>

#include<stdlib.h>

#define SIZE 4

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




void main(){
    int choice, data;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Print the top element\n4. print all the  elements of the stack\n5. Quit\nPlease enter your choice: ");
        scanf("%d", &choice);
    

        switch(choice){
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data= pop();
                printf("Deleted element is %d\n", data);
                break;
            case 3:
                printf("The top element is %d\n", peek());
                break;
            case 4:
                printf("All elements of the stack : ");
                display();
                break;
            case 5:
                exit(1);
                break;
            default :
                printf("Invalid input.");

    }

    }
    

}

