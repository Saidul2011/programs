#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *add_begn(struct node *head, int data);
struct node *addToEmpty(struct node* head, int data);
struct node *add_end(struct node *head, int data);

struct node *del_pos(struct node *head, int pos);
struct node *del_first(struct node *head);
struct node *del_last(struct node *head);

int main(){
    struct node *head = NULL;
    head=addToEmpty(head, 67);
    head=add_begn(head,56);
    head=add_end(head, 89);
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);

    head=del_pos(head,pos);

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

struct node *del_first(struct node *head){
    head=head->next;
    free(head->prev);
    head->prev=NULL;
    return head;
}
struct node *del_last(struct node *head){
    struct node *temp=head;
    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;

    return head;
}

struct node *del_pos(struct node *head, int pos){
    
    struct node *temp=head;
    struct node *temp2=NULL;
    if(pos==1){
        head=del_first(head);
    }
    else{
        while(pos !=1){
                temp=temp->next;
                
                pos--;   
            }
        if(temp->next == NULL){
            head=del_last(head);
        }
        else{
            temp2=temp->prev;
            temp2->next=temp->next;
            temp->next->prev=temp2;
            free(temp);
            temp=NULL;
        }
    }

    return head;
}