#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};


struct node* del_whole(struct node *head);
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
    head=del_whole(head);
    print(head);

}

struct node* del_whole(struct node *head){
    struct node *temp=head;
    while(temp !=NULL){
        temp=temp->link;
        free(head);
        head=temp;
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