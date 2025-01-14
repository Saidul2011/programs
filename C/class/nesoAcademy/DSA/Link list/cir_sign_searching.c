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
void print(struct node *tail);
int search(struct node *tail,int ele);

int main(){
    struct node *tail;
    tail=circularSingly(2);
    tail=add_begn(tail,1);
    tail=add_end(tail,3);
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    tail=add_pos(tail, pos, 4);

    print(tail);
    int ele;
    printf("\nEnter the element you want to search :");
    scanf("%d",&ele);
    int index=search(tail,ele);
    if(index == 0) printf("Not exist!");
    else{
        printf("position : %d ", index);
    }
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

int search(struct node *tail,int ele){
    int index=1;
    struct node *ptr=tail->next;
    do{
        
        if(ptr->data == ele) return index;
        ptr=ptr->next;
        index++;
    }while(ptr !=tail->next);

    return 0;
}