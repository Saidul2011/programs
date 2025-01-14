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

int main(){
    int data;
    struct node* top =NULL;
    struct node* top1 =NULL;
    struct node* top2 =NULL;
    push(1, &top);
    push(2, &top);
    push(3, &top);
    display(&top);

    data= pop(&top);
    push(data, &top1);

    data= pop(&top);
    push(data, &top1);

    display(&top);
    display(&top1);
}