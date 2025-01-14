#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add_pos(struct node* head, int d, int position);
void print(struct node  *);

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

    int n;
    printf("Enter the position(except 1st) you want to add element: ");
    scanf("%d", &n);
    add_pos(head, 99, n );

    print(head);

}

void add_pos(struct node* head, int d, int position){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    struct node *temp=malloc(sizeof(struct node));
    temp=head;


    position--;
    while(position !=1){
        temp=temp->link;
        position--;
    }

    ptr->link=temp->link;
    temp->link=ptr;
    
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