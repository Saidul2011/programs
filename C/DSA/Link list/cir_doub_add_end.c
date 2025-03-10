#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *circularDoubly(int );
void add_begn(struct node *tail, int data);
struct node *add_end(struct node *tail,int data);
void display(struct node *tail);

int main(){
    struct node *tail;
    tail=circularDoubly(1);

    display(tail);

    add_begn(tail,2);
    
    display(tail);

    add_begn(tail,3);
    
    display(tail);

    tail=add_end(tail,4);

    display(tail);

    tail=add_end(tail,5);

    display(tail);

    
    return 0;
}

void display(struct node *tail){
    struct node *ptr=tail->next;
    printf("\n");
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    } while (ptr != tail->next);
    printf("\n");
}

struct node *circularDoubly(int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    temp->prev=temp;

    return temp;

}

void add_begn(struct node *tail, int data){

    struct node *new=malloc(sizeof(struct node));
    new->data=data;

    new->next=tail->next;
    tail->next->prev=new;
    tail->next=new;
    new->prev=tail;
}

struct node *add_end(struct node *tail,int data){
    struct node *new=malloc(sizeof(struct node ));
    new->data=data;

    tail->next->prev=new;
    new->next=tail->next;
    tail->next=new;
    new->prev=tail;
    tail=new;

    return tail;
}