#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *circularSingly(int );

int main(){
    struct node *tail;
    tail=circularSingly(1);

    printf("\nvalue :%d",tail->data);
    return 0;
}

struct node *circularSingly(int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;

    return temp;
}