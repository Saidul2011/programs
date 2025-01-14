#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* add_begn(struct node *head, int d);
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

    head=add_begn(head, 67);
    
    print(head);

}

struct node* add_begn(struct node *head, int d){
    struct node *ptr= malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;

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