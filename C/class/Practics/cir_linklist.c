#include<stdio.h>
#include<stdlib.h>
typedef struct link{
    int data;
    struct link *next;
}node;
node *x; 
node *y;
node *head=NULL;
void create(){
    node *temp=(node *)malloc(sizeof(node));
    printf("Enter the data : ");
    scanf("%d",&temp->data);
    head=temp;
    temp->next=head;
}
node *last_node(){
    node *last=head;
    do
    {
        last=last->next;
    } while (last->next != head);
    return last;
    
}

void insert(){
    if(head != NULL){
        printf("Enter a item which exist in link list :");
        int item;
        scanf("%d",&item);
        y=head;
        
        while(y->data != item){
            x=y;
            y=y->next;
            if(y==head){
                printf("%d not exist in link list\n");
                exit(1);
            }
        }
        printf("press 0: For add data before %d\n",item);
        printf("press 1: For add data after %d\n",item);
        int ch;
        scanf("%d",&ch);
        node *new=(node *)malloc(sizeof(node));
        printf("Enter data : ");
        scanf("%d",&new->data);
        if(y==head && ch==0){
            new->next=head;
            head=new;
            node *last=last_node();
            last->next=head;
        }
        else if(ch==0){
            new->next=y;
            x->next=new;
        }
        else if(ch ==1){
            new->next=y->next;
            y->next=new;
        }

    }
}
void delete(){
    printf("Enter the item you want to delete : ");
    int item;
    scanf("%d",&item);
    y=head;
    while(y->data != item){
        x=y;
        y=y->next;
        if(y==head){
            printf("%d not exist in link list!\n",item);
            exit(1);
        }
    }
    if(y==head){
        head=head->next;
        node *last=last_node();
        last->next=head;
        free(y);
        y=NULL;
    }
    else{
        x->next=y->next;
        free(y);
        y=NULL;
    }
}
void display(){
    if(head !=NULL){
        node *temp=head;
        printf("\nLink list Item : ");
        do
        {
            printf("%d ",temp->data);
            temp=temp->next;
        } while (temp !=head);
    }
    else{
        printf("Empty");
    }
}
int main(){
    create();
    insert();
    insert();
    insert();
    delete();
    display();
    return 0;
}