#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *link;
};

void print(struct node *);
struct node* add_at_end(struct node *, int );


int main(){
    struct node *head=NULL;

    head = (struct node *)malloc(sizeof(struct node));
    head->data=3;
    head->link=NULL;

    struct node *ptr=head;
    ptr= add_at_end(ptr,5);
    ptr= add_at_end(ptr,7);
    ptr= add_at_end(ptr,9);

    ptr=head;

    print(head);

}

struct node* add_at_end(struct node *ptr, int data){
    struct node  *temp;

    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;

    return temp;
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