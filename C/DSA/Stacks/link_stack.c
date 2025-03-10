#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct link{
    int data;
    struct link *next;
}node;
node *head=NULL;
void push(int data){
    node *new=(node *)malloc(sizeof(node));
    if(new==NULL){
        printf("Stack Overflow!\n");
        exit(1);
    }
    new->data=data;
    new->next=head;
    head=new;
}

int pop(){
    if(head==NULL){
        printf("Stack Underflow!\n");
        exit(1);
    }
    node *temp=head;
    int data=temp->data;
    head=head->next;
    free(temp);
    temp=NULL;
    return data;

}

int top(){
    return head->data;
}

void display(){
    if(head==NULL){
        printf("Stack is Empty!\n");
    }
    else{
        printf("Stack Elements : ");
        node *temp=head;
        while (temp !=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    
}

int main(){
    int ch,data;
    while(1){
        printf("1. Push\n2. Pop\n3. Top element\n4. Display\n5. Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        system("cls");
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            printf("\nDeleted element is : %d\n",pop());
            break;
        case 3:
            printf("\nTop element : %d\n",top());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("Invalid chooice!\n");
        }
        printf("\n");
    }
    return 0;
}
