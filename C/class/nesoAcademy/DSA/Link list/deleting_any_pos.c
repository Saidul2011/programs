#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void del_pos(struct node **,int pos);

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
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    del_pos(&head,pos);
    
    print(head);

}

void del_pos(struct node **head,int pos){

    struct node* current=*head;
    struct node* previous=*head;

    if(*head==NULL){
        printf("Lise is already empty!");
    }

    else if(pos==1){
        *head=current->link;
        free(current);
        current=NULL;

    }

    else{
        while(pos!=1){
        previous=current;
        current=current->link;
        pos--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
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