#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *link;
};

void count_nodes(struct node  *);

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


    printf("%d\n",head->data);
    printf("%d\n",head->link->data);
    printf("%d\n",head->link->link->data);

    count_nodes(head);

}

void count_nodes(struct node *start){
    int count = 0;
    if(start == NULL)
        printf("Linked list is empty.");
    
    struct node *ptr= NULL;
    ptr = start ;
    while(ptr != NULL){
        count++;
        ptr = ptr -> link;
    }

    printf("No. of nodes is: %d", count);

}