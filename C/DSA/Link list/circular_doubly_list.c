#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *circularDoubly(int );

int main(){
    struct node *tail;
    tail=circularDoubly(1);

    printf("\n%d", tail->data);

    return 0;
}

struct node *circularDoubly(int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    temp->prev=temp;

    return temp;

}