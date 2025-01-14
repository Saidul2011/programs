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

int isEmpty(){
    if(first == -1 ) return 1;

    else return 0;

}

int isFull(){
    if(first == SIZE-1) return 1;
    else return 0;
}

int peek(){
    if(isEmpty()){
        printf("Stack is Empty");
        exit(1);
    }
    return stack_arr[0];
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
    int choice, data;
    while(1){
        printf("\n1. Push\n2. Pop\n3. Print the top element.\n4. Print the all elements.\n5. Quit\nEnter your choice : \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter element you want to pushed : ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data=pop();
            printf("Deleted element is : %d",data);
            break;
        case 3:
            printf("The top element is : %d\n",peek());
            break;
        case 4:
            printf("All elements are : ");
            display();
            break;
        case 5:
            exit(1);
            break;
        default:
           printf("Invalid input!");
        }

    }
}