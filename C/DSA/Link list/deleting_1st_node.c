#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* del_first(struct node *);

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

    head=del_first(head);
    
    print(head);

}

struct node* del_first(struct node *head){
    if(head==NULL){
        printf("Lise is already empty!");
    }
    else{
        struct node *temp=head;
        head=head->link;

        free(temp);
        temp=NULL;
    }
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