#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *circularSingly(int );
struct node* add_begn(struct node *tail, int data);
struct node *add_end(struct node *tail, int data);
struct node *add_pos(struct node *tail, int pos, int data);

struct node *del_end(struct node *tail);
void del_first(struct node *tail);
struct node *del_pos(struct node *tail, int pos);





void print(struct node *tail);

int main(){
    struct node *tail;
    tail=circularSingly(2);
    tail=add_begn(tail,1);
    tail=add_end(tail,3);

    print(tail);

    int pos;
    printf("\nEnter the position you want to add:\n");
    scanf("%d",&pos);
    tail=add_pos(tail, pos, 4);

    print(tail);

    int t;
    printf("\nEnter the position you want to delete:\n");
    scanf("%d",&t);
    tail=del_pos(tail,t);

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

struct node *add_end(struct node *tail, int data){
    struct node *newp=malloc(sizeof(struct node));
    newp->data=data;
    newp->next=tail->next;
    tail->next=newp;
    tail=newp;

    return tail;
}

struct node *add_pos(struct node *tail, int pos, int data){
    struct node *ptr=tail->next;
    struct node *value=malloc(sizeof(struct node));
    value->data=data;
    value->next=NULL;

    if(pos==1) {
        tail=add_begn(tail,data);
    }

    else{
        pos--;
        while(pos>1){
            ptr=ptr->next;
            pos--;
        }  
    
        if(ptr->next == tail->next){
            tail=add_end(tail, data);
        }
        else{
            value->next=ptr->next;
            ptr->next=value;
        }
    }

    return tail;
}
void del_first(struct node *tail){
    struct node *temp=tail->next;
    tail->next=tail->next->next; // tail->next=temp->next;
    free(temp);
    temp=NULL;
}

struct node *del_end(struct node *tail){
    struct node *temp=malloc(sizeof(struct node));
    temp=tail;
    struct node *ptr;
    ptr=tail->next;
    while(ptr->next !=tail){
        ptr=ptr->next;
    }
    tail=ptr;
    tail->next=temp->next;

    free(temp);
    temp=NULL;

    return tail;
}

struct node *del_pos(struct node *tail, int pos){

    struct node *ptr=tail->next;
    struct node *temp=ptr->next;
    if(pos==1){ 
        del_first(tail); 
        return tail;
    }
    else{
        pos-=1;
        while(pos>1){
            ptr=ptr->next;
            temp=ptr->next;
            pos--;
        }
        if(temp == tail){
            tail=del_end(tail);
            return tail;
        }
        else{
            ptr->next=temp->next;
            free(temp);
            temp=NULL;

            return tail;
        }
    }

}
