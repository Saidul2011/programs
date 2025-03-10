#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_begn(struct node *head, int data);
struct node* addToEmpty(struct node* head, int data);
struct node *add_end(struct node *head, int data);
struct node *add_pos(struct node* head, int data, int pos);

int main(){
    struct node *head = NULL;
    head=addToEmpty(head, 0);
    head=add_begn(head,56);
    head=add_end(head, 89);
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    head=add_pos(head,pos,55);

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

struct node *add_end(struct node *head, int data){
    struct node* temp, *tp;
    temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while(tp->next !=NULL){
        tp= tp->next;
    }
    tp->next=temp;
    temp->prev= tp;
    return head;

}

struct node *add_pos(struct node* head, int pos, int data){
    struct node *temp=head;
    struct node *new=malloc(sizeof(struct node));
    new->prev=NULL;
    new->data=data;
    new->next=NULL;
    if(pos==1){
        head=add_begn(head,data);
    }
    else {
        pos--;
        while(pos !=1){
            temp=temp->next;
            pos--;
        }
        if(temp->next !=NULL){
            new->next=temp->next;
            temp->next=new;
            new->next->prev=new;
            new->prev=temp;
        }
        else{
            head=add_end(head,data);
        }
    }

    return  head;
}