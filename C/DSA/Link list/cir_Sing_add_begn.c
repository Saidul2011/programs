#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *circularSingly(int );
struct node* add_begn(struct node *tail, int data);
void print(struct node *tail);

int main(){
    struct node *tail;
    tail=circularSingly(1);
    tail=add_begn(tail,3);

    print(tail);
    return 0;
}

void print(struct node *tail){
    struct node *ptr=tail->next;
    printf("\n");
    do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while (ptr != tail->next);
    
}

struct node *circularSingly(int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;

    return temp;
}

struct node* add_begn(struct node *tail, int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    temp->next=tail->next;
    tail->next=temp;

    return tail;
}