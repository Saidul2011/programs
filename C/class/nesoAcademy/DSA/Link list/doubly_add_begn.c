#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_begn(struct node *head, int data);
struct node* addToEmpty(struct node* head, int data);

int main(){
    struct node *head = NULL;
    head=addToEmpty(head, 34);
    head=add_begn(head,56);

    struct node *ptr=head;
    while(ptr !=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

    return 0;
}

struct node* addToEmpty(struct node* head, int data){
    struct node *temp= malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;

    head=temp;
    return head;
}

struct node *add_begn(struct node *head, int data){
    struct node* temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;

    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;

}