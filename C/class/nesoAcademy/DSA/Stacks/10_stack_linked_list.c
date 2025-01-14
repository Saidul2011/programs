#include<stdio.h>
#include<stdlib.h>

struct  node {
    int data;
    struct  node  *link;
}*top=NULL;

int isEmpty(){
    if(top== NULL) return 1;
    else return 0;
}

void push(int data){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    if(newNode == NULL){  // malloc() return NULL when the requested memory can't be allocated.
        printf("Stack overflow.");
        exit(1);
    }
    newNode->data=data;
    newNode->link = NULL;

    newNode->link = top;
    top= newNode; 
}

int pop(){
    if(isEmpty()){
        printf("Stack is Underflow!");
        exit(1);
    }
    else {    
        struct node *temp=top;
        int value=temp->data;
        top=top->link;

        free(temp);
        temp=NULL;

        return value;
    }
}


void peek(){
    if(isEmpty()) printf("Stack is Empty.");
    else{
        printf("The top element is : %d", top->data);
    }
}

void display(){
    if(isEmpty()) printf("stack is empty.");
    else
    {    struct node *temp;
        temp=top;
        while(temp){
            printf("%d ",  temp->data);
            temp=temp->link;
        }
        printf("\n");}
}

void main(){
    int choice,data;
    while(1){
        printf("\n1. Push\n2. Pop\n3. Print the top element.\n4. Print the all elements.\n5. Quit\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the element you want to pushed :");
                scanf("%d", &data);
                push(data);
                break;
            case 2: 
                data=pop();
                printf("Deleted element is : %d",data);
                break;
            case 3:
                peek();
                break;
            case 4: 
                printf("All elements of the stack are : ");
                display();
                break;
            case 5:
                exit(1);
                break;
            default :
                printf("Invalid Input!");
        }
    }
}