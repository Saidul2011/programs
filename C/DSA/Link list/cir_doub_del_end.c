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
struct node* add_pos(struct node *tail,int pos, int data);
struct node *del_end(struct node *tail);
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
    int pos;
    printf("Enter the position you want add:");
    scanf("%d",&pos);
    tail=add_pos(tail, pos, 7);


    display(tail);

    tail=del_end(tail);

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

struct node* add_pos(struct node *tail,int pos, int data){
    struct node* ptr=tail->next;
    struct node *new=malloc(sizeof(struct node));
    new->prev=NULL;
    new->data=data;
    new->next=NULL;

    if(pos==1)   add_begn(tail,data);
    else{
        
        while (pos>1){
            ptr=ptr->next;
            if(ptr==tail->next) break;
            pos--;
            
        }

        if(ptr == tail->next)  tail=add_end(tail,data);
        else{
                new->next=ptr;
                new->prev=ptr->prev;
                ptr->prev=new;
                new->prev->next=new;

        }
        
    }

    return tail;
}

struct node *del_end(struct node *tail){
    struct node *temp=tail;

    tail->next->prev=tail->prev;
    tail->prev->next=tail->next;
    tail=temp->prev;

    free(temp);
    temp=NULL;

    return tail;
    
} 