#include<stdio.h>
#include<stdlib.h>

struct  node {
    int data;
    struct  node  *link;
};

int isEmpty(struct node* top){
    if(top== NULL) return 1;
    else return 0;
}

struct node* push(int data, struct node *top){
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

    return top;
}

struct node* pop(struct node *top){
    struct node *temp=top;

    if(isEmpty(top)){
        printf("Stack is Underflow!");
        exit(1);
    }
    else {   
         
        top=top->link;

        return temp;
    }
}


void peek(struct node *top){
    if(isEmpty(top)) printf("Stack is Empty.");
    else{
        printf("The top element is : %d", top->data);
    }
}

void display(struct node *top){
    if(isEmpty(top)) printf("stack is empty.");
    else
    {    struct node *temp;
        temp=top;
        while(temp){
            printf("%d ",  temp->data);
            temp=temp->link;
        }
        printf("\n");}
}

int main(){

    struct node *temp=NULL;
    struct node *top=NULL;
    struct node *top1=NULL;
    struct node *top2=NULL;

    top=push(1,top);
    top=push(2,top);
    top=push(3,top);
    top=push(4,top);

    temp=pop(top);
    top=temp->link;
    top1=push(temp->data, top1);

    temp=pop(top);
    top=temp->link;
    top1=push(temp->data, top1);

    display(top);
    display(top1);

    return 0;
}