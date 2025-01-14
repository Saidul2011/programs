#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void push(int data,struct node** topp){
    struct node* newNode;
    newNode = malloc(sizeof(newNode));
    if(newNode == NULL){
        printf("Stack Overflow!");
        exit(1);
    }
    newNode->data = data;
    newNode->link = NULL;

    newNode->link = *topp;
    *topp = newNode;

}

int pop(struct node** topp){
    struct node* temp;
    int val;
    temp= *topp;
    val = temp->data;
    *topp = (*topp)->link;
    free(temp);
    temp==NULL;

    return val;
}

void display(struct node** top){
    struct node *temp;
    temp=*top;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");

}

void reverse_stack(struct node** topp){
    struct node* top1 = NULL;
    struct node* top2 = NULL;

    // Pushing onto temp_stack1
    while(*topp != NULL){
        push(pop(topp), &top1);
    }
    // Pushing onto temp_stack2
    while(top1 != NULL){
        push(pop(&top1), &top2);
    }
    // Pushing onto original_stack
    while(top2 != NULL){
        push(pop(&top2), topp);
    }
}


int main(){
    
    struct node* top =NULL;
    push(1, &top);
    push(2, &top);
    push(3, &top);
    display(&top);
    
    reverse_stack(&top);
    display(&top);

    return 0;
}