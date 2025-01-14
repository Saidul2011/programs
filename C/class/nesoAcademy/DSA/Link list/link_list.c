#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head=NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *next= malloc(sizeof(struct node));
    next->data=98;
    next->link=NULL;
    head->link=next;

    printf("%d\n",head->data);
    printf("%d\n",next->data);
}