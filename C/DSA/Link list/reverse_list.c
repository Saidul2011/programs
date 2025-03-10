#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node*reverse(struct node *head);

void print(struct node *);


int main(){
    struct node *head=NULL;

    head = (struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current= malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;

    head->link=current;

    current= malloc(sizeof(struct node));
    current->data=102;
    current->link=NULL;

    head->link->link=current;

    
    print(head);
   head=reverse(head);
    print(head);

}

struct node*reverse(struct node *head){
    printf("The reverse list is:\n");
    struct node *prev=NULL;
    struct node *next=NULL;
    while(head !=NULL){
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;

    }

    head=prev;
    return head;
}


void print(struct node *head){

    if(head==NULL) printf("Linked list is empty.");

    struct node *ptr=NULL;
    ptr=head;
    while(ptr !=NULL){
        printf("%d\n", ptr->data);
        ptr= ptr->link;
    }
}